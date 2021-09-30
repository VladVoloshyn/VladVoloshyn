#include <iostream>
using namespace std;

int main()
{
	double rem, N, K;
	cout << "input N and K: \n";
	cin >> N >> K;
	rem = N;
	int fraction;
	fraction = 0;

	while (rem >= K)

	{
		rem = rem - K; 
		fraction++;
	}
	cout << "Fraction: " << fraction << '\n';
	cout << "Remainder: " << rem << '\n';

	return 0;
}