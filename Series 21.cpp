#include <iostream>
using namespace std;

int main()
{
	int i, j, N, a, b;
	cin >> N;
	j = 0;
	cout << "1:";
	cin >> b;
	for (i = 2; i <= N; i++)
	{
		cout << i << ":";
		cin >> a;
		if (a <= b)
			j = 1;
		else
			b = a;
	}

	if (j == 1)
		cout << "False";
	else
		cout << "True";
	return 0;

}