#include <iostream>

using namespace std;

int tab[100001];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> tab[i];
    }
    int q;
    cin >> q;
    while(q--) {
        int a, b;
        cin >> a >> b;
        int minmum = tab[a];
        for(a; a<=b; ++a) {
            minmum = min(tab[a], minmum);
        }
        cout<<minmum<<endl;
    }
    return 0;
}
