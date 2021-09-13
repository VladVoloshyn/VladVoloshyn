#include <iostream>
using namespace std;

int main()
{
	int a, b, S, P;
	cout << "Enter the side:" << '\n';
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	P = 2 * (a + b);
	S = a * b;
	cout << "P = " << P << '\n';
	cout << "S = " << S;
	return 0;
}