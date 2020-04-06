#include <iostream>
using namespace std;
int main() {
	int x = 6;
	switch (x) {
	case1:
		cout << "x is 1\n" << endl;
	case2:
	case3:
		cout << "x is 2 or 3" << endl; break;
	default: cout << "x is not 1, 2, or 3." << endl;
	}
	return 0;
}