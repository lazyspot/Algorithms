#include <iostream>
#include <algorithm>

using namespace std;

int function_average(int a, int b, int c)
{
    if((a>=b&&a<=c)||(a<=b&&a>=c))
    {
        return a;
    }
    if((b>=a&&b<=c)||(b<=a&&b>=c))
    {
        return b;
    }
    if((c>=a&&c<=b)||(c<=a&&c>b))
    {
        return c;
    }
}

int main()
{
    int a, b, c, average;
    for(;cin>>a>>b>>c;)
    {
        average=function_average(a, b, c);
        if(a>=b+c || b>=a+c || c>=a+b)
        {
            cout<<"brak"<<endl;
            continue;
        }
        if((max(max(a,b),c)*max(max(a,b),c))==(average*average)+(min(min(a,b),c)*min(min(a,b),c)))
        {
            cout<<"prostokatny"<<endl;
            continue;
        }
        if((max(max(a,b),c)*max(max(a,b),c))>(average*average)+(min(min(a,b),c)*min(min(a,b),c)))
        {
            cout<<"rozwartokatny"<<endl;
            continue;
        }
        if((max(max(a,b),c)*max(max(a,b),c))<(average*average)+(min(min(a,b),c)*min(min(a,b),c)))
        {
            cout<<"ostrokatny"<<endl;
            continue;
        }
    }
    return 0;
}
