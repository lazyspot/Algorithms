#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long length, sum, start = 1;
    cin >> length >> sum;

    while((2 * start + (length - 1)) * length / 2 < sum){
        start++;
    }
 
    for(int i = 0; i < length; i++){
        cout << start + i << " ";
    }
    cout << endl;

    return 0;
}