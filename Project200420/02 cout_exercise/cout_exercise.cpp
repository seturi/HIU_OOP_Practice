#include <iostream>
using namespace std;

double area(int r);	// �Լ��� ���� ����

double area(int r) {	// �Լ� ����
	return 3.14 * r * r;	// ������ r�� ������ ����
}

int main() {
	int n = 3;
	char c = '#';
	cout << c << 5.5 << '-' << n << "hello" << true << endl;
	cout << "n + 5 =" << n + 5 << endl;
	cout << "������ " << area(n);	// �Լ� area()�� ���� �� ���

	return 0;
}