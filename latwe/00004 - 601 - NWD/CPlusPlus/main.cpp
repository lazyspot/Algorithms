#include <iostream>
#include <cstdio>

using namespace std;

int nwd (int a, int b)
{
    int c;
    for(;b!=0;)
    {
        c=a;
        a=b;
        b=c%b;
    }
    return a;
}

int main()
{
    int i, j=0,a,b;
    cin>>i;
    for(j;j<i;++j)
    {
        cin>>a>>b;
        cout<<nwd(a,b)<<endl;
    }
    return 0;
}
