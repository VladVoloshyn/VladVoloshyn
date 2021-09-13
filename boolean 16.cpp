#include <iostream>
using namespace std;

int main()
{
	int A, c;
	cout << "Enter A: " << '\n';
	cout << "A = ";
	cin >> A;
	c = A % 2;
	if (c == 0)
	{
		if (A > 9 and A < 100)
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	return 0;
}