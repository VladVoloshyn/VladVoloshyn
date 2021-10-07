#include <iostream>

void SortDec3(float* X, float* Y, float* Z)
{
	if (*X < *Y)
	{
		float A = *Y;
		*Y = *X;
		*X = A;
	}
	if (*X < *Z)
	{
		float D = *Z;
		*Z = *X;
		*X = D;
	}
	if (*Y < *Z)
	{
		float B = *Z;
		*Z = *Y;
		*Y = B;
	}
}

int main()
{
	float a, b, c;
	std::cout << "A1: ";
	std::cin >> a;
	std::cout << "B1: ";
	std::cin >> b;
	std::cout << "C1: ";
	std::cin >> c;
	SortDec3(&a, &b, &c);

	std::cout << a << "  " << b << " " << c << "\n";

	float d, e, f;
	std::cout << "A2: ";
	std::cin >> d;
	std::cout << "B2: ";
	std::cin >> e;
	std::cout << "C2: ";
	std::cin >> f;
	SortDec3(&d, &e, &f);

	std::cout << d << "  " << e << " " << f;

	return 0;

}
