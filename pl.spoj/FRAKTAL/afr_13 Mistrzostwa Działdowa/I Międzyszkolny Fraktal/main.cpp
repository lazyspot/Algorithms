#include <iostream>

using namespace std;

int main()
{
    int result=0, stationary, remote;
    for(int i=0; i<4; ++i) {
        cin>>stationary>>remote;
        result += stationary-remote;
    }
    cout<<result<<endl;
    return 0;
}
