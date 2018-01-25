#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a==b)
        {
            printf("%d\n",a+b);
        }
        else
        {
            while(a!=b)
            {
                if(b%a==0)
                {
                    printf("%d\n",2*a);
                    break;
                }
                if(a%b==0)
                {
                    printf("%d\n",2*b);
                    break;
                }
                if(a<b)
                {
                    b=b%a;
                }
                else
                {
                    a=a%b;
                }
            }
        }
    }
    return 0;
}
