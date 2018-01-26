#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a, b, c=0;
    scanf("%d",&b);
    printf("%d\n",b);
    for(;;)
    {
        scanf("%d",&a);
        if(a==42 && b != 42)
        {
            ++c;
        }
        printf("%d\n",a);
        b=a;
        if(c==3)
        {
            break;
        }
    }
    return 0;
}
