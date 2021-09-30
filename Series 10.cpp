#include <iostream>
using namespace std;

int main()
{
	int i, j, N, a;
	cin >> N;
	j = 0;

	for (i = 1; i <= N; i++)
	{
		cout << i << ":";
		cin >> a;
		if (a < 0)
			j = 1;
	}
		if (j == 1)
			cout << "False";
		else 
			cout << "True";
	return 0;

}
