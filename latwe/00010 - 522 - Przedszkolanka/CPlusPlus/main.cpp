#include <iostream>

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

int nww (int a, int b)
{
    return a*b/nwd(a,b);
}


int main()
{
    int N, a, b;
    cin>>N;
    while(N != 0)
    {
        cin>>a>>b;
        cout<<nww(a,b)<<endl;
        --N;
    }
    return 0;
}
