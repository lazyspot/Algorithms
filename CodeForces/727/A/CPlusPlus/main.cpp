#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> operation;

bool solve(long long int a, long long int b) {
    if(a > b) {
        return false;
    }
    if(a == b) {
        return true;
    }
    if(solve(a*2,b)){
        operation.push_back(a*2);
        return true;
    }
    if(solve(a*10+1,b)) {
        operation.push_back(a*10+1);
        return true;
    }
    return false;
}

int main()
{
    long long int a, b;
    cin>>a>>b;
    if(solve(a,b)){
        operation.push_back(a);
        cout<<"YES"<<endl;
        cout<<operation.size()<<endl;
        reverse(operation.begin(),operation.end());
        for(int i=0; i<operation.size(); ++i) {
            cout<<operation[i]<<endl;
        }
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}
