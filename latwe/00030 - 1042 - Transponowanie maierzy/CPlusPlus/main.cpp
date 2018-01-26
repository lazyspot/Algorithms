#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j;
    int tab [200][200];

	cin>>m>>n;
	
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            cin>>tab[i][j];
        }
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            cout<<tab[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
