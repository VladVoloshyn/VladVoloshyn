#include <iostream>
using namespace std;

int main()
{
	double A, B, C;
	cout << "input A: ";
	cin >> A;
	cout << "input B: ";
	cin >> B;
	cout << "input C: ";
	cin >> C;

	if (A < B && B < C)
	{
		A = 2 * A;
		B = 2 * B;
		C = 2 * C;
		cout << A << ", " << B << ", " << C;
	}
	else
	{
		A = -A;
		B = -B;
		C = -C;
		cout << A << ", " << B << ", " << C;
	}
	return 0;
}
