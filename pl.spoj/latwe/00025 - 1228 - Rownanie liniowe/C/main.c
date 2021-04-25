#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;
    for(;scanf("%lf%lf%lf",&a,&b,&c)!=EOF;)
    {
        if(a==0 && (c-b)==0)
        {
            printf("NWR");
            continue;
        }
        if(a==0 && (c-b)>0)
        {
            printf("BR");
            continue;
        }
        if((c-b)==0)
        {
            printf("NWR");
            continue;

        }
        else
        {
            printf("%.2lf\n",(c-b)/a);
            continue;
        }
    }
    return 0;
}
