#include <iostream>

using namespace std;

int main()
{
    int a, b, t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<a+b<<endl;
        }
        else
        {
            while(a!=b)
            {
                if(b%a==0)
                {
                    cout<<2*a<<endl;
                    break;
                }
                if(a%b==0)
                {
                    cout<<2*b<<endl;
                    break;
                }
                if(a<b)
                {
                    b=b%a;
                }
                else
                {
                    a=a%b;
                }
            }
        }
    }
    return 0;
}
