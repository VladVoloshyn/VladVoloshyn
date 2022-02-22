//#include "stdafx.h"
#include <iostream>
using namespace std;
#include <clocale>
struct Node
{
	int number;
	int info;
	Node* p;
};

void add_car(Node** top, int number);
void delete_car(Node** top, int number);

int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	Node* top1 = 0;
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
void add_car(Node* *top, int number)
{
	Node* pv = new Node;  //виділення пам'яті під новий елемент списку
	pv->p = NULL;            //вказівник 0
	pv->number = number;    // присвоюємо введений номер в поле структури int;
	cout << "Машина з номером " << ' ' << pv->number << ' ' << "заехала на стоянку" << endl;
	
	pv->info = 0;    // інформація про те, скільки машина виїзджала
	if (*top == 0)   //якщо структура порожня
	{
		*top = pv;    //присвоюємо дану інформацію
	}
	else
	{
		pv->p = *top; // добавляємо номер авто в загальний список;
		*top = pv;
	}
}
void delete_car(Node** top, int number)
{
	Node* tmp = *top;
	Node* tmp2 = *top;
	Node* pr = 0;
	while ((tmp != 0) && (tmp->number != number))   //не пустий та номер є
	{
		pr = tmp;
		tmp = tmp->p;   // присвоюємо вказівник на наступний елемент
	}

	if (tmp == 0)    // не знайшли номер в списку
	{
		cout << "Машины с данным номером нет на стоянке" << endl;
	}
	else           //знайшли номер списку
	{
		cout << "Машина с номером" << ' ' << tmp->number << ' ' << "выезжала со стоянки" << ' ' << tmp->info++ << ' ' << "раз" << endl;
		while (tmp2 != tmp)
		{
			tmp2->info++;     // \кожній машині спреду добавляється ++info
			tmp2 = tmp2->p;   
		}
		if (pr != 0)
			pr->p = tmp->p;   // запамятовуємо вказівник на видалений номер
		if (tmp == *top)
			*top = (*top)->p;
		delete tmp;
	}
}