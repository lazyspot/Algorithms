#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char i;
    int x, y;
    while (!(cin >> i).eof())
    {
        cin>>x>>y;
        switch(i)
        {
            case '+':
                cout<<x+y<<endl;
                break;
            case '-':
                cout<<x-y<<endl;
                break;
            case '*':
                cout<<x*y<<endl;
                break;
            case '/':
                cout<<x/y<<endl;
                break;
            case '%':
                cout<<x%y<<endl;
                break;
        }
    }
    return 0;
}
