#include "linkedStack.h"

LinkedStack::LinkedStack()
{
	top = nullptr;
}

LinkedStack::~LinkedStack()
{
	makeEmpty();
	delete(top);
}

bool LinkedStack::isEmpty()
{
	if (top == nullptr)
		return true;

	return false;
}

bool LinkedStack::isFull()
{
	Node* temp = new Node();

	if (!temp)
		return true;
	delete(temp);
	
	return false;
}

void LinkedStack::push(itemType value)
{
	if (!isFull())
	{
		Node* temp = new Node();
		temp->data = value;
		temp->link = top;
		top = temp;
	};
}

void LinkedStack::makeEmpty()
{
	while (!isEmpty())
		pop();
}

itemType LinkedStack::pop()
{
	if (!isEmpty())
	{
		itemType value = topItem();
		Node* temp = top;
		top = top->link;
		delete(temp);
		return value;
	}
}

itemType LinkedStack::topItem()
{
	if(!isEmpty())
		return top->data;
}
