# include <iostream>

using namespace std;

class Point;	// Point�̶�� Ŭ������ �̸��� �̸� �˸�

class PointOP	// Point������ �����ϴ� Ŭ����
{
private:
	int opcnt;
public:
	PointOP() : opcnt(0) {}
	Point PointAdd(const Point&, const Point&);	// Ŭ���� �Լ��� ���� �ϹǷ� �Ű������� �̸��� �����ص� ��
	Point PointSub(const Point&, const Point&);
	~PointOP()
	{
		cout << "total number of operation calls : " << opcnt << endl;
	}
};

class Point
{
private:
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos) : x(xpos), y(ypos) {}
	friend Point PointOP::PointAdd(const Point&, const Point&);	// PointOP ���� �Լ��� friend �����Ͽ� ����
	friend Point PointOP::PointSub(const Point&, const Point&);	// PointOP ���� �Լ��� friend �����Ͽ� ����
	friend void ShowPointPos(const Point&);	// �����Լ� ShowPointPos()�� friend ����
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

void ShowPointPos(const Point& pos)	// �����Լ�
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}

int main(void)
{
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointSub(pos1, pos2));

	return 0;
}