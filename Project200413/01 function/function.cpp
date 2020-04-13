#include <iostream>
using namespace std;
//
//int raiseToPower(int base, int exponent) {
//	// function declaration
//	int result = 1;
//	for (int i = 0; i < exponent; i = i + 1) {
//		result = result * base;
//	}
//	return result;	// return type은 function의 type과 같아야함
//}
//
//int main() {
//	int threeExpFour = raiseToPower(3, 4);
//	cout << "3^4 is " << threeExpFour << endl;
//	int sixExpFive = raiseToPower(6, 5);
//	cout << "6^5 is " << sixExpFive << endl;
//	int twelveExpTen = raiseToPower(12, 10);
//	cout << "12^10 is " << twelveExpTen << endl;
//}


void raiseToPower(int base, int exponent) {
	// function declaration
	int result = 1;
	for (int i = 0; i < exponent; i = i + 1) {
		result = result * base;
	}
	cout << base << "^" << exponent << " is " << result << endl;
}

int main() {
	raiseToPower(3, 4);
	raiseToPower(6, 5);
	raiseToPower(12, 10);

	return 0;
}

