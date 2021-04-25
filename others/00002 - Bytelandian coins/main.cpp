#include <iostream>
 
using namespace std;

int dp[10000][100];
int A[101];
int k, n;

int solve(int a, int j) {
	if (a < 0 || j >= n || k == 0) {
		return 0;
	}
	else if (a == 0) {
		return 1;
	}
	else if (dp[a][j] > -1) {
		return dp[a][j];
	}
	dp[a][j] = solve(a - A[j], j) + solve(a, j + 1);
	return dp[a][j];
}

int main() {
	memset(dp, -1, sizeof(dp));
	cin >> k >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	cin.get();
	cout << solve(k, 0);
	cin.get();
	return 0;
}