#include <iostream>
using namespace std;

int main()
{
	int a, b, c, i;
	cout << "input a: ";
	cin >> a;
	cout << "input b: ";
	cin >> b;
	cout << "input c: ";
	cin >> c;

	if (a > b)	i = b;
	else i = a;

	if (i > c)
		cout << c;
	else
		cout << i;
	return 0;
}
