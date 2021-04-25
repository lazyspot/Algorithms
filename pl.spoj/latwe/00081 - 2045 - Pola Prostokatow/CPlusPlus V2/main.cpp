#include <iostream>

using namespace std;

int main() {
    pair<int, int> a1, a2, b1, b2;

    cin >> a1.first >> a1.second >> a2.first >> a2.second;
    cin >> b1.first >> b1.second >> b2.first >> b2.second;

	int horizontal_len = min(a2.first, b2.first) - max(a1.first, b1.first);
	int vertical_len = min(a2.second, b2.second) - max(a1.second, b1.second);
	int common_area = 0;

	if(horizontal_len > 0 && vertical_len > 0)
	{
		common_area = horizontal_len * vertical_len;
	}

	int a_area = abs(a1.first - a2.first) * abs(a1.second - a2.second);
	int b_area = abs(b1.first - b2.first) * abs(b1.second - b2.second);

	cout << (a_area + b_area - common_area) << endl;

    return 0;
}
