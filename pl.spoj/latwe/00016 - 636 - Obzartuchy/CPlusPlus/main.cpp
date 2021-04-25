#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t, n, m;
    double c;
    int tab[10000];
    cin>>t;
    for(int i=0; i<t; ++i)
    {
        cin>>n>>m;
        for(int j=0; j<n; ++j)
        {
            cin>>tab[j];
        }
        c=0;
        for(int j=0; j<n; ++j)
        {
            c=c+(86400/tab[j]);
        }
        cout<<ceil(c/m)<<endl;
    }
    return 0;
}
