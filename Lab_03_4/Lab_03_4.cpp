// Lab_03_4.cpp
// Лазар Владислав
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if (x <= 0 && y <= 0 && y >= -x - R || x >= 0 && abs(x) < abs(R) && y <= sqrt(R * R - x * x))
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	};

	return 0;
}
