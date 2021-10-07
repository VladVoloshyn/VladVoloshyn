#include <iostream>

void Minmax(float* X, float* Y)
{
	if (*X < *Y)
	{
		float A = *Y;
		*Y = *X;
		*X = A;
	}
}

int main()
{
	float a, b, c, d;
	std::cout << "A1: ";
	std::cin >> a;
	std::cout << "B1: ";
	std::cin >> b;
	std::cout << "C1: ";
	std::cin >> c;
	std::cout << "D1: ";
	std::cin >> d;
	Minmax(&a, &b);
	Minmax(&c, &d);
	Minmax(&a, &c);
	Minmax(&b, &d);
	std::cout << d << "  " << a;

	return 0;

}