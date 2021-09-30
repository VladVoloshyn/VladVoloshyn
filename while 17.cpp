#include <iostream>
using namespace std;

int main()
{
	int K;
	cout << "input K: \n";
	cin >> K;

	while (K != 0)

	{
		int i;
		i = K % 10;
		K = K / 10;
		cout << i << " ";
		
	}
	

	return 0;
}