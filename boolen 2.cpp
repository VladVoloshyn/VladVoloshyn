#include <iostream>
using namespace std;

int main()
{
	int A, i;
	cout << "Enter A: " << '\n';
	cout << "A = ";
	cin >> A;
	i = A % 2;
	if (i == 0)
	{
		cout << "A - even number";
	}
	else
	{
		cout << "A - odd number";
	}

	return 0;
}