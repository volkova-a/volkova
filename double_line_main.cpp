// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"
#include "double_line.h"


int _tmain(int argc, _TCHAR* argv[])
{
	List*head, *cur;
	int num;
	cout << "a=  ";
	cin >> num;
	head = createlist(num);
	cur = head;
	for (int i = 0; i < 9; i++) {
		cout << "a = ";
		cin >> num;
		cur = addToend(cur, num);
	}
	printlist(head);
	cout << endl;
	// ������� ������� ������ �� ��������� 3
	deleteElem(&head, 3);
	printlist(head);
	cout << endl;
	//���������� �������� ����� 6
	addTomiddle(&head, 4, 6);
	printlist(head);
	cout << endl;
	// ���������� ��������� �� �����������
	sort(&head);
	printlist(head);
	system("PAUSE");
	return 0;
}

