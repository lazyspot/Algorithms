#include <bits/stdc++.h>

using namespace std;

vector <int> values;

int main(){
    int current;
    while(cin >> current){
        if(current == 0) break;
        values.push_back(current);
    }
    int maxx = *max_element(values.begin(), values.end());
    int output = 0;
    if(values.size() == 1) {
        cout << values[0] << endl;
        return 0;
    }
    for(int i=0; i < values.size(); ++i) {
        if(values[i] == maxx) continue;
        output = max(output, values[i]);
    }
    if(output == 0) output = maxx;
    cout << output << endl;
}
