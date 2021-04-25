#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	for(;cin >> a >> b >> c;)
	{
		int max_side = max(a, max(b, c));
		int min_side = min(a, min(b, c));
		int mid_side = a + b + c - max_side - min_side;

		if(max_side >= min_side + mid_side)
		{
			cout << "brak" << endl;
			continue;
		}
		if(min_side*min_side + mid_side * mid_side < max_side*max_side)
		{
			cout << "rozwartokatny" << endl;
			continue;
		}
		if(min_side*min_side + mid_side * mid_side == max_side*max_side)
		{
			cout << "prostokatny" << endl;
			continue;
		}
		if(min_side*min_side + mid_side * mid_side > max_side*max_side)
		{
			cout << "ostrokatny" << endl;
			continue;
		}
	}
	return 0;
}
