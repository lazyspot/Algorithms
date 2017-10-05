#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0;
    unsigned long long int a=0;
    scanf("%d",&i);
    for(j;j<i;++j)
    {
        scanf("%d",&a);
        switch(a)
        {
        case 0:
        case 1:
            printf("%d %d\n",0,1);
            break;
        case 2:
            printf("%d %d\n",0,2);
            break;
        case 3:
            printf("%d %d\n",0,6);
            break;
        case 4:
            printf("%d %d\n",2,4);
            break;
        case 7:
            printf("%d %d\n",4,0);
            break;
        case 5:
        case 6:
        case 8:
            printf("%d %d\n",2,0);
            break;
        case 9:
            printf("%d %d\n",8,0);
            break;
        default:
            printf("%d %d\n",0,0);
            break;
        }
    }
    return 0;
}
