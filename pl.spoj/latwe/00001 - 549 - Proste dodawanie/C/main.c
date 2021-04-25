#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, t, x, y, z;
    scanf("%d",&i);
    for (y=0; y<i; ++y)
    {
        t = 0;
        x = 0;
        scanf("%d",&n);
        for (z=0; z<n; ++z)
        {
            scanf("%d",&x);
            t=t+x;
        }
        printf("%d\n",t);
    }
    return 0;
}
