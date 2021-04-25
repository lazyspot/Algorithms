#include <bits/stdc++.h>

using namespace std;

int tree[4000000];

int add(int a, int b, int id, int l, int r) {
	if (a < l || r <= a) {
		return tree[id];
	}
	if (l + 1 == r) {
		tree[id] += b;
		return tree[id];
	}
	int m = (l + r) / 2;
	tree[id] = max(add(a, b, 2*id, l, m), add(a, b, 2*id + 1, m, r));
	return tree[id];
}

int query(int a, int b, int id, int l, int r) {
	if (l >= a && r <= b) {
		return tree[id];
	} else if (l >= b || r <= a) {
		return -1;
	}
	int m = (l + r) / 2;
	return max(query(a, b, 2*id, l, m), query(a, b, 2*id + 1, m, r));
}

int main() {
	int n, queries, operation, a, b;
	cin >> n >> queries;
	for (int i = 0; i < queries; i++) {
		cin >> operation >> a >> b;
		if (operation) {
			cout << query(a, b + 1, 1, 0, n);
		} else {
			add(a, b, 1, 0, n);
		}	
	}
	for (int i = 0; i < 4*n; i++) {
		cerr << "i: " << i << " " << tree[i] << endl;
	}
	
}
