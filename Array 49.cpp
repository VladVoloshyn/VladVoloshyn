#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int n;

	cout << "Enter size array N: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	
	// перевіряє, чи елементи масиву в межів від 1 до N;
	for (int i = 0; i < n; i++)
		if (a[i] > n, a[i] <1)
			cout << a[i];

	// перевіряє повторення елементів;
	for (int a = 1; a <= n; ++a)
	{
		int z = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == a)
				++z;

			if (z > 1) cout << a[i];
			break;
		}
	}

	
	return 0;
}
