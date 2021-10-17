#include <iostream>
#include <bitset>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int input;
    while(cin>>input) {
        if(input == 0) {
            cout << 0 << endl;
            continue;
        }
        string s = bitset<64>(input).to_string();
        s.erase(0, s.find_first_not_of('0'));
        reverse(s.begin(), s.end());
        input = stoull(s, nullptr, 2);
        cout << input << endl;
    }
    return 0;
}
