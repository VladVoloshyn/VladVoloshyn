#include <iostream>
using namespace std;

int main()
{
	int a[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	
	int b = 0;

	for (int j = 0; j < 9; j++)
	{
		if (a[j] < a[9])
			cout << "a[" << j << "]=" << a[j] << "\n";
		else
			b = b + 1;
	}
	
	if (b == 9)
	{
		
		cout << "0";
	}

	return 0;
}
