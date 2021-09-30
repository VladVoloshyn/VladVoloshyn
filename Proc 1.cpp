#include <iostream>

void PowerA3(float A, float *B)
{
	*B = pow(A, 3);
}

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		float A, B;
		std:: cout << i << ":";
		std:: cin >> A;
		PowerA3(A, &B);
		std:: cout << B << '\n';
	}
	
	return 0;

}
