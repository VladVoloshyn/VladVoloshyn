#include <iostream>
using namespace std;

int main()
{
	int N;
	double K;
	cout << "Input number K and N (N > 0): \n";
	while (cin >> K >> N)
	{
		int i;
		for (i = 1; i <= N; i++)
		{
			cout << K << " ";
		}
	}
	return 0;

}
