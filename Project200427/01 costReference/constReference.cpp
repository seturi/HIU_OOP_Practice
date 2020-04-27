#include <iostream>
using namespace std;

void printIt(const int& x)
{
	cout << x << endl;
	// x = 3; // error! 참조는 값을 변경시킬 수 없다
}

int main()
{
	int a = 1;
	printIt(a);	// non-const I-value

	const int b = 2;
	printIt(b);	// const I-value

	printIt(3);	// literal r-value

	printIt(2 + b);	// expression r-value

	return 0;
}