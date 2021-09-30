#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Input number N (N > 0): \n";
	while (cin >> n)
	{
		double S, i;
		S = 0;

		for (i = 1; i <= n; i++)
			S = S + (1 / i);
		cout << S;
	}
	return 0;

}
