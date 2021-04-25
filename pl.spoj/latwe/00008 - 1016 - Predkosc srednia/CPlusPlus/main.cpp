#include <iostream>

using namespace std;

int main()
{
    int t, V1, V2;
    cin>>t;
    while(t != 0)
    {
        cin>>V1>>V2;
        cout<<2*V1*V2/(V1+V2)<<endl;
        --t;
    }
    return 0;
}
