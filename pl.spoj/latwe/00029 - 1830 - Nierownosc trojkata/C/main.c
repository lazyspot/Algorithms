#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;
    for(;scanf("%lf%lf%lf",&a,&b,&c)!=EOF;)
    {
        if((a+b)>c && (a+c)>b && (b+c)>a && a>0 && b>0 && c>0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
