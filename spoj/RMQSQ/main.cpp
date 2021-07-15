#include <iostream>

using namespace std;

int n;
int A[100000];
int Tmin[100000][17];
int log_array[100001];

void generate_tmin_array() {
    for(int i = 0; i < n; ++i) {
        Tmin[i][0] = A[i];
    }
    for(int i = 1; (1 << i) <= n; ++i) {
        for(int j = 0; j <= n - (1 << i); ++j) {
            Tmin[j][i] = min(Tmin[j][i - 1], Tmin[j + (1 << (i - 1))][i - 1]);
            //cerr << "T[" << j << "][" << i << "]=" << Tmin[j][i] << endl;
        }
    }
}

void generate_log_array() {
    log_array[1] = 0;
    for(int i = 2; i <= n; ++i) {
        log_array[i] = log_array[i / 2] + 1;
        //cerr << "log[" << i << "]=" << log_array[i] << endl;
    }
}

int query(int left, int right) {
    int k = log_array[right - left + 1];
    return min(Tmin[left][k], Tmin[right - (1 << k) + 1][k]);
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    generate_tmin_array();
    generate_log_array();
    int q, l, r;
    cin >> q;
    while(q--) {
        cin >> l >> r;
        cout << query(l,r) << endl;
    }
    return 0;
}
