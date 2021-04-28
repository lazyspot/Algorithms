#include <bits/stdc++.h>
using namespace std;

vector<string> foldery;

/*
/a/b - i

/a - indeks
*/

bool jest_podfolderem(int indeks)
{
    for (int i = 0; i < foldery.size(); ++i) {
        if (i != indeks && foldery[indeks].find(foldery[i]) != string::npos) return true;
    }
    return false;
}
bool ajest_podfolderem(int indeks)
{
    for (int i = 0; i < foldery.size(); ++i) {
        if (i != indeks && foldery[indeks].find(foldery[i]) != string::npos) return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int wynik = 0;
    for (int i = 0; i < n; ++i) {
        string folder;
        cin >> folder;
        foldery.push_back(folder);
    }
    for (int i = 0; i < n; ++i) {
        if (!ajest_podfolderem(i)) {
            ++wynik;
        }
    }
    cout << wynik << endl;
    return 0;
}
