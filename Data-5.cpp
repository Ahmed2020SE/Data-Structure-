#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};
typedef Node* ptr;
void insert_first(ptr& list,int ele) {
	ptr newNode = newNode;
	newNode->data = ele;
	newNode->next=list;
}
void insert_position(ptr& list, int ele, int pos) {
	ptr p = list;
	int count = 0;
	if (pos == 0) {
		insert_first(list, ele);
		return;
	}
	while (p!=NULL&&count<pos-1)
	{
		count++;
		p = p->next;
	}
	ptr node = new Node;
	node->next = p->next->next;
	p->next = node;
}

int main()
{
    return 0;
}

