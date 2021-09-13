#include <iostream>
using namespace std;

int main()
{
	int A;
	cout << "Enter A: " << '\n';
	cout << "A = ";
	cin >> A;
	if (A > 0)
	{
		cout << "A - positive number";
	}
	else
	{
		cout << "A - negative number";
	}

	return 0;
}