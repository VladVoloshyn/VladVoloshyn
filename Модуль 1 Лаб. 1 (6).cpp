#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "N: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		double a = pow(2, i) - 1;
		cout << a << '\n';
	}
	return 0;

}
