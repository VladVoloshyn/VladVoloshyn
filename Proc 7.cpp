#include <iostream>

void InvDigits(int K)
{
	while ( K > 0)
	{
		int r = K % 10;
		K = K / 10;
		std::cout << r;
	}
}

int main()
{
	int K;
	
	std:: cin >> K;
	InvDigits(K);

	return 0;

}
