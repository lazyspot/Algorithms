#include <stdio.h>

int main()
{
    int input[101];
    int t, i, q;
    scanf("%d",&t);
    while(t != 0)
    {
        scanf("%d",&q);
        for(i=1; i<=q; ++i)
        {
            scanf("%d",&input[i]);
        }
        for(i=1; i<=q; ++i)
        {
            if(i%2==0)
            {
                printf("%d ",input[i]);
            }
        }
        for(i=1; i<=q; ++i)
        {
            if(i%2!=0)
            {
                printf("%d ",input[i]);
            }
        }
        printf("\n");
        --t;
    }
    return 0;
}
