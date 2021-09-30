#include <iostream>
using namespace std;

int main()
{
	int A, B, N;
	cout << "Input number A and B (A < B): ";
	cin >> A >> B;
	int S, i;
	S = A;
	N = B - A;
	for (i = 1; i <= N; i++)
	{
		S += (A + i);
	}
	cout << '\n';
	cout << "S =" << S;
	return 0;

}
