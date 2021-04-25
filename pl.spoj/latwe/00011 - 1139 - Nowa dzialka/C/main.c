#include <stdio.h>
#include <stdlib.h>

int main()
{
    int D,j=0;
    unsigned long long int X=0;
    scanf("%d",&D);
    for(j;j<D;++j)
    {
        scanf("%d",&X);
        printf("%d\n",X*X);
    }
    return 0;
}
