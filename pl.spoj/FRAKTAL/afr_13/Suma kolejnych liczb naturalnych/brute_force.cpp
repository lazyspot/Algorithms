#include <bits/stdc++.h>

using namespace std;

long long Suma(long long a, long long n){
    return ((a+n)/2)*(n-a);
}

int main()
{
    long long k, n, suma=0, a, b;
    cin>>k>>n;
    a = 1;
    while(suma < n){
        suma = Suma(a,a+k);
        a++;
    }
    a--;
    for(int i = 0; i < k; i++){
        cout<<a+i<<" ";
    }cout<<endl;

    return 0;
}
