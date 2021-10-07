#include <iostream>
using namespace std;

int main()
{
	int a[10];
	int n, i;
	cout << "N: ";
	cin >> n;

	for (int i = 0; i < n; i++)
{
		cout << "a[" << i << "]:";
	cin >> a[i];
}
	for (int i = n - 1; i >= 0; --i)
		cout << "a[" << i << "]=" << a[i] << "\n";
	return 0;
}