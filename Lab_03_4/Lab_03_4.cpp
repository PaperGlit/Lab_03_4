// Lab_03_4.cpp
// ����� ���������
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 11

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
	
	if (y <= 0 && y >= -x - R || y <= sqrt(R*R - x*x) && y >= 0)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	return 0;
}
