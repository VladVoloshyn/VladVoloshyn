#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cout << "Перевіримо твердження: Кожне із чисел А і В непарне" << '\n';
	cout << "Enter A: " << '\n';
	cout << "A = ";
	cin >> A;
	cout << "Enter B: " << '\n';
	cout << "B = ";
	cin >> B;
	int a, b;
	a = A % 2;
	b = B % 2;
	if ( a == 1 and b == 1 ) 
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	return 0;
}