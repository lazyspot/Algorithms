#include <iostream>
#include <stdio.h>

using namespace std;

char characters[50000];

int main()
{
    char c;
    int i=0,j,k=0,l=0;
    cin>>i;
    for(j=0;j<=i;++j)
    {
        c=getchar();
        for(k=0;c==1, c != '\n';++k)
        {
            characters[k]=c;
            c=getchar();
        }
        characters[k]='\0';
        for(k=0;characters[k]!='\0';++k)
        {
            ++l;
        }
        l=l/2;
        for(k=0;k<l;++k)
        {
            cout<<characters[k];
        }
        l=0;
        cout<<endl;
    }
    return 0;
}
