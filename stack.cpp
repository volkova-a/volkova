#include "stdafx.h"
#include "iostream"
#include "stack.h"


void push(int num, elem **top) {

	elem *curr = new elem;//������� ���������� ���� elem

	curr->num = num;//�������� �������� ���������� � curr

	if (*top == NULL) { //���� ���� �������, �� ����������� �������� ����
		curr->prev = NULL;
	}
	else {//���� ���, �� ���������� � ������� �������
		curr->prev = *top;
	}
	*top = curr;//� ������� ������� �������
}
int pop(elem **top) {
	//    int tmp = (**top).num;
	int tmp = (*top)->num;
	if (*top == NULL) {
		return -1;
	}
	elem *tmp_top = *top;
	*top = (**top).prev;
	delete tmp_top;
	return tmp;
}
void output(elem *top) {
	while (top != NULL) {
		cout << top->num << endl;
		top = top->prev;
	}
}