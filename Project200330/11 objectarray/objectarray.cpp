#include "objectarray.h"

int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };
	for (int i = 0; i < 3; i++) {	// �迭�� �� ���� ��ü�� ��� ����
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
	}
}