#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j;
    int tab [200][200];

    scanf("%d%d",&m,&n);

    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%d",&tab[i][j]);
        }
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            printf("%d ",tab[j][i]);
        }
        printf("\n");
    }
    return 0;
}
