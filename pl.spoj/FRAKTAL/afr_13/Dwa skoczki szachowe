#include <iostream>

#include <cmath>
//https://pl.spoj.com/problems/FR_AA_08/
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int dif0 = a[0] - b[0];
    int dif1 = a[1] - b[1];
    dif0 = abs(dif0);
    dif1 = abs(dif1);
    bool flag=false;
    if(dif0 == 1 && dif1 == 2){
        flag=true;
    }
    else if(dif0 == 2 && dif1 == 1){
        flag=true;
    }
    flag?cout<<"TAK"<<endl:cout<<"NIE"<<endl;
}
