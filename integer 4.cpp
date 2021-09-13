#include <iostream>
using namespace std;

int main()
{
	int c, b, a;
	cout << "Enter A and B (A > B) : " << '\n';
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	c = a / b;
	cout << "Result = " << c;
	return 0;
}