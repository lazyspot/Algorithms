#include <bits/stdc++.h>
using namespace std;

bool jest_podfolderem(const string &folder_1, const string &folder_2)
{
    return folder_2.substr(0, folder_1.size()) == folder_1;
}


int main()
{
    int n;
    cin >> n;
    vector<string> foldery(n);
    for (int i = 0; i < n; ++i) {
        cin >> foldery[i];
        foldery[i] += '/';
    }
    sort(foldery.begin(), foldery.end());
    int wynik = 1;
    int ostatni_usuniety = 0;
    for (int i = 1; i < n; ++i) {
        if (!jest_podfolderem(foldery[ostatni_usuniety], foldery[i])) {
            ++wynik;
            ostatni_usuniety = i;
        }
    }
    cout << wynik << endl;
    return 0;
}
