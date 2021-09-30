#include <iostream>
using namespace std;

int main()
{
	double N;
	cout << "input N (N > 0): ";
	while (cin >> N)
	{
		int K;
		K = 1;

		while (K * K <= N)
		{
			K++;
		}
		cout << "K= " << K << '\n';
	}
	return 0;
}