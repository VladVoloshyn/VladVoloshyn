#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int n, k;
	cout << "N (N < 100): ";
	cin >> n; 
	cout << "K (1 <= K <= N): ";
	cin >> k;

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	for (int j = k; j < n; j+=k)
	
		cout << "a[" << j << "]=" << a[j] << "\n";
	
	return 0;
}
