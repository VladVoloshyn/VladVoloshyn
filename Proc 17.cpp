#include <iostream>

int RootCount(float a, float b, float c)
{
	float d = b * b - 4 * a * c;
	if (d < 0)
	{
		return 0;
	}
	if (d == 0)
	{
		return 1;
	}
	if (d > 0)
	{
		return 2;
	}
}

int main()
{
	float A, B, C;
	std::cout << "A: ";
	std::cin >> A;
	std::cout << "B: ";
	std::cin >> B;
	std::cout << "C: ";
	std::cin >> C;
	

	std::cout << "root:" << RootCount(A, B, C);

	return 0;

}