#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, d;
    int output;
    for(;scanf("%lf%lf%lf",&a,&b,&c)!=EOF;)
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
        printf("%d\n",output);
    }
    return 0;
}
