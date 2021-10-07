#include <iostream>
#include <conio.h>
using namespace std;

void f(int n);

int main()
{
	int k, max, n;
	cout << " N:";
	cin >> n;
	k = 0; 
	max = 0;

	while (n != 1)
	{	
		if (n % 2 == 0) n = n / 2;
		else n = n * 3 + 1;
		k++;
		if (n > max) max = n;
		cout << n << " ";
	}

	cout <<  '\n';
	cout << " Max:" << max << '\n';
	cout << " Iter:" << k << '\n';
	return 0;
}
