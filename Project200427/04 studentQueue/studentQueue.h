#pragma once

#include "Node.h"		
class StudentQueue
{
	Node*	front;		
	Node*	rear;		
public:
	StudentQueue(): front(NULL), rear(NULL) { }
	~StudentQueue() { while(!isEmpty()) delete dequeue(); }
	bool isEmpty() { return front == NULL; }

	// ���� ����
	void enqueue (Node* n)	{
		if( isEmpty() ) front = rear = n;	
		else {								
			rear->setLink(n);
			rear = n;
		}
	}
	// ���� ����
	Node* dequeue ( ) {
		if( isEmpty() ) return NULL;
		Node* temp = front;
		front = front->getLink();			
		if( front == NULL ) rear = NULL;	
		return temp;
	}
	Node* peek ( )	{ return front; }
	void display( ) {
		cout << "List :" << endl;
		for (Node* p = front; p != NULL; p = p->getLink())
			p->display();
		cout << endl;
	}
};

