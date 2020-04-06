#include "objectarray.h"

int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };
	for (int i = 0; i < 3; i++) {	// 배열의 각 원소 객체의 멤버 접근
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
	}
}