#include <iostream>

using namespace std;

int main() {
	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		if((n/2)&1) {
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
		for(int i=2; i<=n; i+=2) {
			cout<<i<<" ";
		}
		for(int i=1; i<n-1; i+=2) {
			cout<<i<<" ";
		}
		cout<<n+n/2-1<<endl;
	}
	return 0;
}
