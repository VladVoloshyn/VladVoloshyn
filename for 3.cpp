#include <iostream>
using namespace std;

int main()
{
	int A, B, N;
	cout << "Input number A and B (A < B): ";
	cin >> A >> B;
	int i;
	N = B - (A + 1);
	for (i = 1; i <= N; i++)
	{
		cout << B - i << " ";
	}
	cout << '\n';
	cout << "N =" << N;
	return 0;

}
