#include "StudentStack.h"

void main()
{
	LinkedStack stack;
	stack.push(new Node(1604305, "�̹�ȣ", "��ǻ�Ͱ��а�"));
	stack.push(new Node(1930482, "������", "�����а�"));
	stack.push(new Node(2048672, "������", "���ڰ��а�"));
	stack.display();

	Node *node = stack.pop();
	cout << "poped node : ";
	node->display();
	cout << endl;
	delete node;
	stack.display();
}