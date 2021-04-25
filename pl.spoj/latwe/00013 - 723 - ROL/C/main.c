#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, i, j;
    int tab [100];
    scanf("%d",&t);
    for(i=0; i<t; ++i)
    {
        scanf("%d",&n);
        for(j=0; j<n; ++j)
        {
            scanf("%d",&tab[j]);
        }
        for(j=1; j<n; ++j)
        {
            printf("%d ",tab[j]);
        }
        printf("%d\n",tab[0]);
    }
    return 0;
}
