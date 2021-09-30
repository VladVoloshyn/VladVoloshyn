#include <iostream>
using namespace std;

int main()
{
	float rez = 0, r;
	int i;
	for (i = 1; i <= 10; i++)
	{
		cout << i << ":";
			cin >> r;
		rez += r;
	}
	cout << rez;
	return 0;

}
