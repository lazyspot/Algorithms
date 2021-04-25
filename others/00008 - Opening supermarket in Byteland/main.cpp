#include <bits/stdc++.h>

using namespace std;

map<int, int> coupons;

int main() {
	int n, l, k, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> l;
		for (int j = 0; j < l; j++) {
			cin >> k;
			auto ite = coupons.find(k);
			if (ite == coupons.end()) {
				coupons.insert(make_pair(k, 1));
			} else {
				ite->second++;
			}	
		}
		auto last = coupons.end();
		auto first = coupons.begin();
		last--;
		sum += last->first - first->first;
		last->second--;
		first->second--;
		if(last->second < 1) {
			coupons.erase(last);
		}
		if(first->second < 1) {
			coupons.erase(first);
		}	
	}
	cerr << sum;
}
