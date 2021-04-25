#include <iostream>

using namespace std;

int main()
{
    int i;
    char input[1000];
    for(;cin>>input;)
    {
        for(i=0;input[i]!='\0';++i)
        {

        }
        --i;
        for(i;i!=-1;--i)
        {
            cout<<input[i];
        }
        cout<<endl;
    }
    return 0;
}
