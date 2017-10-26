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

int nww (int a, int b)
{
    return a*b/nwd(a,b);
}

int main()
{
    int N, a, b;
    scanf("%d", &N);
    while(N != 0)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",nww(a,b));
        --N;
    }
    return 0;
}
