#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <fstream>

using namespace std;
int main() {
	int a, b;	
	ofstream file;
	file.open("test.txt");
	cin >> a >> b;
	file << a << " " << b << "\n";
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			file << rand() % 11 << " ";
		}
		file << "\n";
	}
	file.close();
}