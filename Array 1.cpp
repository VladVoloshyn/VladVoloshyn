#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int n;
	cout << "N: ";
	cin >> n;

	for (int i = 0; i < n; i++)
		a[i] = 1 + i * 2;

	for (int i = 0; i < n; ++i)
		cout << "a[" << i << "]=" << a[i] << "\n";
	return 0;
}
