#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand((unsigned) time(0));
    int n, m, x;
    char lit;
    cin>>n>>m;
    ofstream zapis("dane.txt");
    for(int j=0;j<n;j++){
        x=rand()%26;
        lit= 'a' + x;
        zapis<<lit;
    }
    zapis<<"\n";
    for(int j=0;j<m;j++){
        x=rand()%26;
        lit= 'a' + x;
        zapis<<lit;
    }
    zapis.close();
    return 0;
}
