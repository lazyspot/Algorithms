#include <stdio.h>
#include <stdlib.h>

int nwd (int a, int b)
{
    int c;
    for(;b!=0;)
    {
        c=a;
        a=b;
        b=c%b;
    }
    return a;
}

int main()
{
    int i, j=0,a,b;
    scanf("%d",&i);
    for(j;j<i;++j)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",nwd(a,b));
    }
    return 0;
}
