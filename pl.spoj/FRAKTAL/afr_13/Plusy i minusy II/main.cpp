#include <iostream>

using namespace std;

int main()
{
    bool flag = false;
    char input;
    int value = 0;
    while(cin>>input) {
        if(input == '+') {
            ++value;
        }
        if(input == '-') {
            --value;
        }
        if(value == 3) {
            cout<<"5 ";
            value=0;
            flag = true;
        }
        if(value == -3) {
            cout<<"1 ";
            value=0;
            flag = true;
        }
    }
    if(!flag) {
        cout<<"BRAK"<<endl;
    }

    return 0;
}
