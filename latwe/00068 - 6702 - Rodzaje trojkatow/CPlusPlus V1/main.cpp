#include <iostream>

using namespace std;

int fun_maximum(int a, int b, int c)
{
    if(a>b&&a>c)
    {
        return a;
    }
    if(b>a&&b>c)
    {
        return b;
    }
    if(c>a&&c>b)
    {
        return c;
    }
}
int fun_average(int a, int b, int c)
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
int fun_minimum(int a, int b, int c)
{
    if(a<b&&a<c)
    {
        return a;
    }
    if(b<a&&b<c)
    {
        return b;
    }
    if(c<a&&c<b)
    {
        return c;
    }
}
int main()
{
    int a, b, c, maximum, average, minimum;
    for(;cin>>a>>b>>c;)
    {
        maximum=fun_maximum(a, b, c);
        average=fun_average(a, b, c);
        minimum=fun_minimum(a, b, c);
        if(a>=b+c || b>=a+c || c>=a+b)
        {
            cout<<"brak"<<endl;
            continue;
        }
        if((maximum*maximum)==(average*average)+(minimum*minimum))
        {
            cout<<"prostokatny"<<endl;
            continue;
        }
        if((maximum*maximum)>(average*average)+(minimum*minimum))
        {
            cout<<"rozwartokatny"<<endl;
            continue;
        }
        if((maximum*maximum)<(average*average)+(minimum*minimum))
        {
            cout<<"ostrokatny"<<endl;
            continue;
        }
    }
    return 0;
}
