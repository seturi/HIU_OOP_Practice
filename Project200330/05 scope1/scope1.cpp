#include <iostream>
using namespace std;

int a = 5;	// glovbal variable
int add(int x, int y) {	// add �Լ������� x, y
	return x + y + a;
}

int main() {
	int x = 3;	// main �Լ������� x, y
	int y = 2;

	cout << add(x, y + 3) << endl;
	return 0;
}