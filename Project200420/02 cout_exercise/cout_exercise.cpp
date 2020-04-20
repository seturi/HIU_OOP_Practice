#include <iostream>
using namespace std;

double area(int r);	// 함수의 원형 선언

double area(int r) {	// 함수 구현
	return 3.14 * r * r;	// 반지름 r의 원면적 리턴
}

int main() {
	int n = 3;
	char c = '#';
	cout << c << 5.5 << '-' << n << "hello" << true << endl;
	cout << "n + 5 =" << n + 5 << endl;
	cout << "면적은 " << area(n);	// 함수 area()의 리턴 값 출력

	return 0;
}