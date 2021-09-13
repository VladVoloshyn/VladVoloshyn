#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter Bytes: ";
	cin >> b;
	a = b / 1024;
	cout << "whole kilobytes = " << a << " Kb";
	return 0;
}