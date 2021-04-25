#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, V1, V2;
    scanf("%d", &t);
    while(t != 0)
    {
        scanf("%d %d",&V1,&V2);
        printf("%d\n",2*V1*V2/(V1+V2));
        --t;
    }
    return 0;
}
