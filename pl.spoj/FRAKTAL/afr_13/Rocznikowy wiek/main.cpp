#include <iostream>

using namespace std;

int main() {
	int favourite_number, birth_date, result;
	cin>>favourite_number>>birth_date;
	result = (favourite_number % 10) * 2;
	result = ((result + 5) * 50) + 1771;
	result = result - birth_date;
	cout<<result%100<<endl;
	return 0;
}