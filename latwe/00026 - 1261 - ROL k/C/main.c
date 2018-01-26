#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, i;
    int tab[10000];
    scanf("%d%d",&n,&k);
    for(i=0; i<n; ++i)
    {
        scanf("%d",&tab[i]);
    }
    for(i=k; i<n; ++i)
    {
        printf("%d ",tab[i]);
    }
    for(i=0; i<k; ++i)
    {
        printf("%d ",tab[i]);
    }
    return 0;
}
