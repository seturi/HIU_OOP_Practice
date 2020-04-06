#include <iostream>
using namespace std;

int a = 5;	// glovbal variable
int add(int x, int y) {	// add 함수에서의 x, y
	return x + y + a;
}

int main() {
	int x = 3;	// main 함수에서의 x, y
	int y = 2;

	cout << add(x, y + 3) << endl;
	return 0;
}