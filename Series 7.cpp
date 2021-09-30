#include <iostream>
using namespace std;

int main()
{
	float a, res = 0;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cout << i << ":";
		cin >> a;
		int f = a * 10;
		a = f / 10;
		f = f % 10;
		if (f < 5)
		res += a;
		else
		{
			a = a + 1;
			res += a;
		}
		cout << a << '\n';

	}
	cout << res;
	return 0;

}
