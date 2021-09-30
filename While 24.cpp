#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "Input N:";
	cin >> N;

	int f1 = 1, f2 = 1, f = 0;

	while (f < N) {
		f = f2 + f1;
		f2 = f1;
		f1 = f;
	}
	if (f == N)
		cout << "True";
	else
		cout << "False";
	return 0;
}