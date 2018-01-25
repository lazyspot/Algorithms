#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, d;
    int output;
    for(;cin>>a>>b>>c;)
    {
        output=0;
        d=(b*b)-(4*a*c);
        if (d==0)
        {
            ++output;
        }
        if (d>0)
        {
            output+=2;
        }
        cout<<output<<endl;
    }
    return 0;
}
