#include <bits/stdc++.h>

using namespace std;

vector<int> first;
vector<pair<int, int>> path;
vector<vector<int>> edges;
vector<vector<pair<int, int>>> mins;

int query(int L, int R) {
	int left = first[L];
	int right = first[R];
	if (left > right) swap(left, right);
	int length = right - left + 1;
	int k = (int) log2(length);
	
	return min(mins[left][k], mins[right - (1 << k) + 1][k]).second;
}

void dfs(int u, int H) {
	first[u] = path.size();
	path.push_back({H, u});
	
	for (auto v: edges[u]) {
		dfs(v, H + 1);
		path.push_back({H, u});
	}
}

int main() {
	int tests;
	cin >> tests;
	
	for (int i = 0; i < tests; i++) {
		int n;
		cin >> n;
		
		first.assign(n + 1, 0);
		edges.assign(n + 1, vector<int>());
		path.clear();

		vector<int> root(n + 1, 0);
		
		for (int j = 1; j <= n; j++) {
			int number;
			cin >> number;
			for (int k = 0; k < number; k++) {
				int vertice;
				cin >> vertice;
				root[vertice] = 1;
				edges[j].push_back(vertice);
			}
		}
		
		int trueRoot = 0;
		for (int j = 1; j <= n; j++) {
			if (root[j] == 0) trueRoot = j;
		}
		assert(1 <= trueRoot && trueRoot <= n);

		dfs(trueRoot, 0);
		int M = path.size();
		int logM = (int) log2(M);
		mins.assign(M, vector<pair<int, int>> (1 + logM));
		
		for (int j = 0; j < M; j++) {
			mins[j][0] = path[j];
		}
		
		for (int j = 1; j <= logM; j++) {
			for (int k = 0; k + (1 << j) <= M; k++) {
				mins[k][j] = min(mins[k][j - 1], mins[k + (1 << (j - 1))][j - 1]);
			}
		}
		
		int q;
		cin >> q;
		vector<int> result;
		for (int j = 0; j < q; j++) {
			int L, R;
			cin >> L >> R;
			result.push_back(query(L, R));
		}
		cout << "Case " << i + 1 << ":" << endl;
		for(int j = 0; j< result.size(); j++){
			cout << result[j] << endl;
		}
	}
	return 0;
}
