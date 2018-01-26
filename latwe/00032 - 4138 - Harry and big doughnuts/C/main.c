#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, c, k, w, i;
    scanf("%d",&t);
    for(i=0;i<t;++i)
    {
        scanf("%d%d%d",&c,&k,&w);
        if((w*c)<=k)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
