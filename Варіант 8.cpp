//#include "stdafx.h"
#include <iostream>
using namespace std;
#include <clocale>
struct Node
{
	int number;
	int info;
	Node *p;
};
void add_car(Node **top, int number);
void delete_car(Node **top, int number);
int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	Node *top1 = 0;
	int menu = 0;
	do
	{
		cout << "1.Добавить машину" << endl;
		cout << "2.Удалить машину" << endl;
		cout << "3.Выход" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
			cout << "Введите номер машины" << endl;
			cin >> number;
			add_car(&top1, number);
			break;
		case 2:
			cout << "Введите номер машины" << endl;
			cin >> number;
			delete_car(&top1, number);
			break;
		}
	} while (menu != 3);
	return 0;
}
void add_car(Node **top, int number)
{
	Node *pv = new Node;
	pv->p = 0;
	pv->number = number;
	cout << "Машина с номером " << ' ' << pv->number << ' ' << "въехала на стоянку" << endl;
	pv->info = 0;
	if (*top == 0)
	{
		*top = pv;
	}
	else
	{
		pv->p = *top;
		*top = pv;
	}
}
void delete_car(Node **top, int number)
{
	Node *tmp = *top;
	Node *tmp2 = *top;
	Node *pr = 0;
	while ((tmp != 0) && (tmp->number != number))
	{
		pr = tmp;
		tmp = tmp->p;
	}
	if (tmp == 0)
	{
		cout << "Машины с данным номером нет на стоянке" << endl;
	}
	else
	{
		cout << "Машина с номером" << ' ' << tmp->number << ' ' << "выезжала со стоянки" << ' ' << tmp->info++ << ' ' << "раз" << endl;
		while (tmp2 != tmp)
		{
			tmp2->info++;
			tmp2 = tmp2->p;
		}
		if (pr != 0)
			pr->p = tmp->p;
		if (tmp == *top)
			*top = (*top)->p;
		delete tmp;
	}
}