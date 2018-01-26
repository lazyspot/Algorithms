#include <iostream>

using namespace std;

int main()
{
    int n;
    int input[10000];
    int output[10000];

    for(n=0;cin>>input[n];++n)
    {

    }
    --n;
    for(n;n>=0;--n)
    {
        cout<<input[n];
        if(n!=0)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
