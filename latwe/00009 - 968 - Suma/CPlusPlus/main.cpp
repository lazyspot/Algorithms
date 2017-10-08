#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    int i, j=0, k;
    while(scanf("%d", &i) != EOF)
    {
            j+=i;
            cout<<j<<endl;
    }
    return 0;
}
