#include <bits/stdc++.h>

using namespace std;

const signed long long factorial[15] = {1ULL, 1ULL, 2ULL, 6ULL, 24ULL, 120ULL, 720ULL, 5040ULL, 40320ULL, 362880ULL, 3628800ULL, 39916800ULL, 479001600ULL, 6227020800ULL};

int main()
{
    long long a, b, n = 0;
    cin>>a>>b;
    for(int i = 0; i < 14; ++i) {
        if (factorial[i] >= a && factorial[i] <= b) {
            ++n;
        }
    }
    cout<<n<<endl;
    return 0;
}
