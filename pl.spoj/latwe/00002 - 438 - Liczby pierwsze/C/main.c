#include <stdio.h>
#include <stdlib.h>

int main()
{
int q, i, j, l;
scanf("%d",&q);
for (j=0; j<q; ++j)
{
    scanf("%d",&i);
    if (i==1)
    {
        printf("NIE\n");
    }
    if (i==2)
    {
        printf("TAK\n");
    }
    for(l=2; l<i; ++l)
    {
        if ((i%l) == 0)
        {
            printf("NIE\n");
            break;
        }
        if (l == (i-1))
        {
            printf("TAK\n");
        }
    }
}
    return 0;
}
