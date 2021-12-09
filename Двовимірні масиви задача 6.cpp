#include <iostream>
using namespace std;

int matrix[8][8] = {
{ 2, 7, 2, 7, 1, 4, 0, 3 },
{ 1, 0, 7, 6, 0, -8, 3, 5 },
{ 2, 7, 1, 8, 1, 4, 9, 3 },
{ 9, 2, 8, 5, 2, 0, 0, 6 },
{ 70, 10, 10, 30, 9, 30, 10, 10 },
{ 8, 2, 4, 9, 1, -6, 4, 9 },
{ 0, 3, 9, 0, 9, 4, 8, 8 },
{ 1, 8, 3, 2, 8, 2, 8, 0 }
};

int min_row(int n) //
{
	int j, k, m;
	k = 0;
	m = matrix[n][0];
	for (j = 1; j < 8; j++)
		if (matrix[n][j] < m) 
		{
			m = matrix[n][j];
			k = j;
		}
	return k;
}

int max_column(int n)
{
	int j, k, m;
	k = 0;
	m = matrix[0][n];
	for (j = 1; j < 8; j++)
		if (matrix[j][n] > m) {
			m = matrix[j][n];
			k = j;
		}
	return k;
}

int main()
{
	int sum, negative;
	int i, j;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++)
			cout << matrix[i][j] << '\t';
		cout << '\n';
	}
	 cout << '\n';
	 cout << "Sum of items in rows with at least one negative item:" << '\n'; // Сума елементів в рядках з хотя б одним від'ємним елементом.
	for (i = 0; i < 8; i++) {
		sum = 0;
		negative = 0;
		for (j = 0; j < 8; j++) {
			if (matrix[i][j] < 0)
				negative = 1;
			sum += matrix[i][j];
		}
		cout << '\n';
		if (negative == 1)

			cout << "Line: " << i+1 << ", sum = " << sum;
	}
	cout << '\n';
	cout << "Saddle points: " << '\n'; // Сідлові точки.
	for (i = 0; i < 8; i++)
	{
		j = min_row(i);
		if (max_column(j) == i)
			cout << "Line: " << j + 1 << ", Row: " << i + 1 << '\n';
	}
	return 0;
}