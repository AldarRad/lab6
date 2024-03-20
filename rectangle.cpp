#include<cmath>
#include "rectangle.h"

rectangle::rectangle(int a, int b, int c, int d)
{
	x2 = a;
	y2 = b;
	x4 = c;
	y4 = d;
}

void rectangle::coor()
{
	x1 = x2;
	y1 = y4;
	x3 = x4;
	y3 = y2;
}
void rectangle::print()
{
	std::cout << "Координаты левой-вверхней вершины: (B) (" << x2 << "," << y2 << ") " << "\n";
	std::cout << "Координаты правой-нижней вершины: (D) (" << x4 << "," << y4 << ") " << "\n";
}
void rectangle::coordinate()
{
	std::cout << "Нахождение координаты левой-нижней вершины: (A) ";
	std::cout << "(" << x1 << "," << y1 << ")" << "\n";
	std::cout << "Нахождение координаты правой-вверхней вершины: (C) ";
	std::cout << "(" << x3 << "," << y3 << ")" << "\n";
}

void rectangle::side()
{
	AB = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
	BC = sqrt((pow(x3 - x2, 2)) + (pow(y3 - y2, 2)));
	CD = sqrt((pow(x4 - x3, 2)) + (pow(y4 - y3, 2)));
	AD = sqrt((pow(x4 - x1, 2)) + (pow(y4 - y1, 2)));
	std::cout << "Длина отрезка AB = " << AB << "\n";
	std::cout << "Длина отрезка BC = " << BC << "\n";
	std::cout << "Длина отрезка CD = " << CD << "\n";
	std::cout << "Длина отрезка AD = " << AD << "\n";
}
void rectangle::square()
{
	int S;
	std::cout << "S = " << "AB*AD = " << AB * AD;
}