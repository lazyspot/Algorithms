#include <iostream>
#include <string>
#include <cstring>

#define ARRAY_SIZE 8000

using namespace std;

string a, b;
int dp[ARRAY_SIZE][ARRAY_SIZE];

int solve(int p, int k) {
    if ((p > a.length() - 1) || (k > b.length() - 1)){
        return 0;
    }
    if (dp[p][k] > -1) {
        return dp[p][k];
    }
    if (a[p] == b[k]) {
        dp[p][k] = 1 + solve(p + 1, k + 1);
        return dp[p][k];
    }
    dp[p][k] = max(solve(p + 1, k), solve(p, k + 1));
    return dp[p][k];

}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> a >> b;
    cout << solve(0, 0);
    return 0;
}
