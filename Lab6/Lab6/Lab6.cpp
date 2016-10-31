#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include "classes.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	List First;
	First.add(5);
	First.add(10);
	First.add(15);
	First.add(20);
	First.add(4);
	First.get();
	First.del();
	First.get();
	cout << "\nПроверка перегруженных операторов:" << endl;
	List Second;
	Second.add(11);
	Second.add(67);
	Second.add(114);
	Second.add(7);
	Second.add(12);
	List lol = First + Second;
	cout << "LOL.GET.......\n";
	lol.get();
	--Second;
	cout << "SECOND.GET.......\n";
	Second.get();
	List Third;
	Third.add(5);
	Third.add(7);
	Third.add(7);
	List Fourth;
	Fourth.add(7);
	Fourth.add(7);
	Fourth.add(5);
	List Fifth;
	Fifth.add(7);
	Fifth.add(5);
	Fifth.add(8);
	List Sixth;
	Sixth.add(7);
	Sixth.add(7);
	Sixth.add(5);
	if (Third == Fourth)
		cout << "Third(5,5,7) == Fourth(7,7,5)" << endl;
	else
		cout << "Third != Fourth" << endl;
	if (Third == Fifth)
		cout << "Third(5,5,7) == Fourth(7,5,8)" << endl;
	else
		cout << "Third != Fifth" << endl;
	if (Fourth == Sixth)
		cout << "Fourth(7,7,5) == Sixth(7,7,5)" << endl;
	else
		cout << "Fourth != Sixth" << endl;
	if (First.IsEmpty() == false)
		cout << "First не пуст" << endl;
    return 0;
}

