#include <stdio.h>
#include <stdlib.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

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
    for(;scanf("%d%d%d",&a,&b,&c)!=EOF;)
    {
        average=function_average(a, b, c);
        if(a>=b+c || b>=a+c || c>=a+b)
        {
            printf("brak\n");
            continue;
        }
        if((max(max(a,b),c)*max(max(a,b),c))==(average*average)+(min(min(a,b),c)*min(min(a,b),c)))
        {
            printf("prostokatny\n");
            continue;
        }
        if((max(max(a,b),c)*max(max(a,b),c))>(average*average)+(min(min(a,b),c)*min(min(a,b),c)))
        {
            printf("rozwartokatny\n");
            continue;
        }
        if((max(max(a,b),c)*max(max(a,b),c))<(average*average)+(min(min(a,b),c)*min(min(a,b),c)))
        {
            printf("ostrokatny\n");
            continue;
        }
    }
    return 0;
}
