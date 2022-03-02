#include <iostream>

#include "linkedStack.h"

using namespace std;

int main()
{
	LinkedStack l;
	if (l.isEmpty())
		cout << "Stack is empty" << endl;
	else
		cout << "Stack is not empty" << endl;

	if (l.isFull())
		cout << "Stack is full" << endl;
	else
		cout << "Stack is not full" << endl;

	for (int i = 1; i <= 4; i++)
	{
		cout << "Adding " << i << " to list" << endl;
		l.push(i);
	}

	if (l.isEmpty())
		cout << "Stack is empty" << endl;
	else
		cout << "Stack is not empty" << endl;

	cout << l.topItem() << endl;

	while(!l.isEmpty())
		cout << l.pop() << endl;

	l.push(42);
	l.push(21);
	l.push(420);
	l.push(69);

	l.makeEmpty();

	if (l.isEmpty())
		cout << "Stack is empty" << endl;
	else
		cout << "Stack is not empty" << endl;

	return 0;
}