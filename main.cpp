// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "stack.h"


int main()
{
	int const N = 10;
	elem *top(NULL);

	for (int i = 0; i<N; ++i) {
		push(i, &top);
	}
	for (int i = 0; i<N; ++i) {
		cout << pop(&top) << endl;
	}

	system("PAUSE");
	return 0;
}

