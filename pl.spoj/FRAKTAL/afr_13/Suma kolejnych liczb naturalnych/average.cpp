#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    long long n;
    cin >> k >> n;
    long long average = n / k;
    long long first;
    if (k % 2 == 1) {
        first = average - k / 2;
    } else {
        first = average - (k / 2 - 1);
    }
    for (int i = 0; i < k; i++) {
        cout << first + i << " ";
    }
    cout << endl;
    return 0;
}