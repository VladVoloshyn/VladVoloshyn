#include <iostream>
using namespace std;

int main()
{
	double a[100];
	int n, k, l;
	
	cout << "Enter size array N: ";
	cin >> n;
	cout << "K, L (0 <= K <= L < N): ";
	cin >> k >> l;

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	double S = 0;
	int q = 0;

	for (int j = k; j <= l; ++j)
	{
		S = S + a[j];
		q++;
	}
	double res = S / q;
	cout << res;
	return 0;
}
