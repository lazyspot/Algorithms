#include <iostream>

using namespace std;

int main()
{
    unsigned short int r[9];
    int q, w;
    char o;
    for(;cin>>o>>q>>w;)
    {
        --q;
        switch(o)
        {
            case 'z':
                r[q]=w;
            break;

            case '+':
                cout<<r[q]+r[w-1]<<endl;
            break;

            case '-':
                cout<<r[q]-r[w-1]<<endl;
            break;

            case '*':
                cout<<r[q]*r[w-1]<<endl;
            break;

            case '/':
                cout<<r[q]/r[w-1]<<endl;
            break;

            case '%':
                cout<<r[q]%r[w-1]<<endl;
            break;
        }

    }
    return 0;
}
