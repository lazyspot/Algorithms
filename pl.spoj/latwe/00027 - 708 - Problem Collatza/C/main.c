#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, s, c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&s);
        c=0;
        for(;;)
        {
            if(s==1)
            {
                break;
            }
            ++c;
            if(s%2==0)
            {
                s=s/2;
            }
            else
            {
                s=(3*s)+1;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
