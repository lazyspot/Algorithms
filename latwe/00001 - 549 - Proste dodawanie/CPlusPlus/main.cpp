#include <iostream>

using namespace std;

int main()
{
    int i, n, t, x, y, z;
    cin >> i ;
    for (y=0; y<i; y++)
    {
        t = 0;
        x = 0;
        cin>>n;
        for (z=0; z<n; z++)
        {
            cin>>x;
            t=t+x;
        }
        cout << t << endl;
    }
    return 0;
}
