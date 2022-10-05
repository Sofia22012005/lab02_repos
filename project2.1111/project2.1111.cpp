// Lab_02.cpp
// < Кульчицька Софія>
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 7
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;//вхідний параметр
	double z1;//результат обчислення 1-го виразу
	double z2;//результат обчислення 2-го виразу
	const double PI = 3.14159265358979;

	cout << "a = "; cin >> a;

	z1 = pow(cos(3 * 1.0 / 8 * PI - a / 4), 2) - pow(cos(11.0 / 8 * PI + a / 4), 2);
	z2 = ((sqrt(2) / 2) * sin(a / 2));
	cout << endl;

	cout << "z1= " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
