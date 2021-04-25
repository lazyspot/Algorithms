#include <stdio.h>
#include <stdlib.h>

char characters[50000];

int main()
{
    char c;
    int i=0,j,k=0,l=0;
    scanf("%d",&i);
    for(j=0;j<=i;++j)
    {
        for(k=0;scanf("%c",&c)==1, c != '\n';++k)
        {
            characters[k]=c;
        }
        characters[k]='\0';
        for(k=0;characters[k]!='\0';++k)
        {
            ++l;
        }
        l=l/2;
        for(k=0;k<l;++k)
        {
            printf("%c",characters[k]);
        }
        l=0;
        printf("\n");
    }
    return 0;
}
