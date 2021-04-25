#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const static int tab_max_size = 1000;
int input_tab[tab_max_size][tab_max_size];
int dp[tab_max_size][tab_max_size];
int n, m;
int solve(int x, int y) {
	int sum = 0;
	if (y == 0) {
		return input_tab[x][y];
	}
	if (dp[x][y] != -1) {
		return dp[x][y];
	}
	if (x > 0) {
		sum = input_tab[x][y] + solve(x - 1, y - 1);
	}
	sum = max(sum, input_tab[x][y] + solve(x, y - 1));
	if (x < m) {
		sum = max(sum, input_tab[x][y] + solve(x + 1, y - 1));
	}
	dp[x][y] = sum;
	return sum;
}

int main() {
	int output = 0;
	memset(dp, -1, sizeof(dp));
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> input_tab[i][j];
		}
	}
	cin.get();
	for (int i = 0; i < m; i++) {
		output = max(solve(i, n),output);
	}
	cout << output << endl;
	cin.get();
}