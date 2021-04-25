#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> measurements;
    for (int i = 0; i < n; ++i) {
        int value;
        cin>>value;
        measurements.insert(value);
    }
    cout << pomiary_temperatury.size() << endl;
    return 0;
}
