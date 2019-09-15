#include <iostream>
#include <algorithm>

using namespace std;

int n, m, l = 1, r, s; // n - ilosc sal, m - ilosc prowadzacych
int A[1000000];

bool is_possible(int x) {
    int y = m;
    for (int i = 0; i < n; i++) {
        y -= A[i] / x;
        if(A[i] % x > 0) {
            y -= 1;
        }
    }
    return y >= 0;
}

int main() {
	while(cin >> n) {
		cin >> m;
	    for (int i = 0; i < n; i++) {
	        cin >> A[i];
	    }
	    r =* max_element(A, A + n);
	    while (l < r) {
	        s = (l + r) / 2;
	        if(is_possible(s)) {
	            r = s;
	        }
	        else {
	            l = s + 1;
	        }
	    }
	    cout << r << endl;
	    l = 1;
	}
}