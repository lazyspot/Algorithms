#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, x, y, i, j;
    scanf("%d", &t);
    for (i=0; i<t; ++i)
    {
        scanf("%d %d %d",&n,&x,&y);
        for (j=0; j<n; ++j)
        {
            if ((j%x == 0) && (j%y != 0))
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}
