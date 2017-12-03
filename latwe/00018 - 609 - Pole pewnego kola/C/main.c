#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.141592654

int main()
{
    double r, d;
    for(;scanf("%lf%lf",&r,&d)!=EOF;)
    {
        d=d/2;
        printf("%.2lf\n",M_PI*(sqrt((r*r)-(d*d)))*(sqrt((r*r)-(d*d))));
    }
    return 0;
}
