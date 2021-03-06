#ifndef LinkedStack_H
#define LinkedStack_H

typedef int itemType;

struct Node
{
	itemType data;

	Node *link;
};

class LinkedStack
{
public:
	LinkedStack();
	//constructor

	~LinkedStack();
	//destructor
	
	bool isEmpty();
	//function: check if the stack is empty
	//pre: stack is initialized
	//post: function value = (is stack empty)

	bool isFull();
	//function: check if the stack is empty
	//pre: stack is initialized
	//post: function value = (is stack full)

	void push(itemType value);
	//function: adds value to top of stack
	//pre:	stack is initialized
	//		stack is not full
	//post: value is on top of stack

	void makeEmpty();
	//function: removes all values from stack
	//post: stack is empty

	itemType pop();
	//function: removes and returns the top value of the stack
	//pre:	stack is initialized
	//		stack is not empty
	//post:	top value of stack is returned and removed

	itemType topItem();
	//function: returns the top value of the satck
	//pre:	stack is initialized
	//		stack is not empty
	//post:	top value of stack is returned

private:
	Node *top;

};

#endif