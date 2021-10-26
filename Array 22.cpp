#include <iostream>
using namespace std;

int main()
{
	double a[100];
	int n, k, l;

	cout << "Enter size array N: ";
	cin >> n;
	cout << "K, L (1 <= K <= L < N): ";
	cin >> k >> l;

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	double S = 0;
	double S1 = 0;

	for (int j = k; j <= l; j++)
		S = S + a[j];
	
	for (int i = 0; i < n; i++)
		S1 = S1 + a[i];
	
	double res = S1 - S;
	cout << res;
	return 0;
}
