#include "StudentQueue.h"
void main()
{
	StudentQueue que;
	que.enqueue(new Node(1604305, "�̹�ȣ", "��ǻ�Ͱ��а�"));
	que.enqueue(new Node(1930482, "������", "�����а�"));
	que.enqueue(new Node(2048672, "������", "���ڰ��а�"));
	que.display();
	delete que.dequeue();
	cout << "After deque :" << endl;
	que.display();
}