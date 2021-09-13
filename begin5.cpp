#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double a, V, S;
	cout << "Enter the side: a = " << '\a';
	cin >> a;
	V = pow (a, 3);
	S = 6 * pow (a, 2);
	cout << "V = " << V << '\n';
	cout << "S = " << S << '\a'; 
	return 0;
}