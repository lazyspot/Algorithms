#include <iostream>
#include <cmath>

using namespace std;

int a, r;

bool check_bug(int x, int y) {
    if (pow((x - a),2) + pow((y-0),2)<=pow(r,2)) return true;
    return false;
}

int main()
{
    int t, not_clean=0, x, y;
    cin>>a>>r;
    cin>>t;
    while(t--) {
        cin>>x>>y;
        if (!check_bug(x,y)) ++not_clean;
    }
    cout<<not_clean<<endl;
    return 0;
}
