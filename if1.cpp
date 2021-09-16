
#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "input a: ";
	cin >> a;

	if (a > 0)
	{
		++a;
		cout << a;
	}
	else
		cout << a;
	return 0;
}
