#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t, n, m, i, j, output;
    double c;
    int tab[10000];
    scanf("%d",&t);
    for(i=0; i<t; ++i)
    {
        scanf("%d%d",&n,&m);
        for(j=0; j<n; ++j)
        {
            scanf("%d",&tab[j]);
        }
        c=0;
        for(j=0; j<n; ++j)
        {
            c=c+(86400/tab[j]);
        }
        output=ceil(c/m);
        printf("%d\n",output);
    }
    return 0;
}
