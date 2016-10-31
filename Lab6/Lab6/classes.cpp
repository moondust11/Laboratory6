#include "stdafx.h"
#include "classes.h"
#include <iostream>

using namespace std;

void List::get()
{
	cout << "======Вывод=========\n";
	List *p = Head;
	for (int i = 1; p != NULL; p = p->Next, i++)
	{
		cout << "Элемент №" << i << " = " << p->num << endl;
	}
	cout << "====================\n";
}
void List::add(int n)
{
	List *p = Head;
	List *N = new List();
	if (Head == NULL)
	{
		N->num = n;
		N->Next = NULL;
		Head = N;
	}
	else
	{
		for (; p->Next != NULL; p = p->Next);
		N->num = n;
		N->Next = NULL;
		p->Next = N;
	}
	count++;
}
void List::del()
{
	List *p = Head, *temp;
	int l;
	cout << "~~~~~~Удаление~~~~~~~~~~~~~~~~~\n";
	get();
	cout << "Выберите номер элемента: "; cin >> l;
	if (l > count)
	{
		cout << "А почему не 100-ый?" << endl;
		return;
	}
	for (int i = 1; i < l; i++, p = p->Next);
	temp = p;
	p = Head;
	for (int i = 2; i < l; i++, p = p->Next);
	p->Next = temp->Next;
	delete temp;
	count--;
	cout << "Удаление выполнено успешно" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}