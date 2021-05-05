#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int dif0 = abs(a[0] - b[0]);
    int dif1 = abs(a[1] - b[1]);
    bool flag = false;
    if (dif0 == 1 && dif1 == 2) {
        flag=true;
    }
    else if (dif0 == 2 && dif1 == 1) {
        flag=true;
    }
    cout<<(flag?"TAK":"NIE")<<endl;
}