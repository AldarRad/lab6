#include<cmath>
#include "rectangle.h"

rectangle::rectangle(point a ,point c, point p1)
{
	A = a;
	C = c;
	B.x = c.x;
	B.y = a.y;
	D.x = a.x;
	D.y = c.y;	
	P = p1;
}
void rectangle::print()
{
	std::cout << "Координаты левой-вверхней вершины: (A) (" << A.x << "," << A.y << ") " << "\n";
	std::cout << "Координаты правой-нижней вершины: (C) (" << C.x << "," << C.y << ") " << "\n";
}
void rectangle::coordinate()
{
	std::cout << "Нахождение координаты левой-нижней вершины: (D) ";
	std::cout << "(" << D.x << "," << D.y << ")" << "\n";
	std::cout << "Нахождение координаты правой-вверхней вершины: (B) ";
	std::cout << "(" << B.x << "," << B.y << ")" << "\n";
	std::cout << "Точка: (P) "<< "(" << P.x << "," << P.y << ")" << "\n";
}
void rectangle::side()
{
	AB = sqrt((pow(B.x - A.x, 2)) + (pow(B.y - A.y, 2)));
	BC = sqrt((pow(C.x - B.x, 2)) + (pow(C.y - B.y, 2)));
	CD = sqrt((pow(D.x - C.x, 2)) + (pow(D.y - C.y, 2)));
	AD = sqrt((pow(D.x - A.x, 2)) + (pow(D.y - A.y, 2)));
	std::cout << "Длина отрезка AB = " << AB << "\n";
	std::cout << "Длина отрезка BC = " << BC << "\n";
	std::cout << "Длина отрезка CD = " << CD << "\n";
	std::cout << "Длина отрезка AD = " << AD << "\n";
}
void rectangle::square()
{
	int S;
	std::cout << "S = " << "AB*AD = " << AB * AD << "\n";
}
void rectangle::function1()
{
	if((D.x <= P.x && C.x >= P.x) && (A.y>=P.y && D.y<=P.y))
		std::cout << "1";
	else 
		std::cout << "0";
}
void rectangle::function2()
{
	if(P.x == 0)
		std::cout << "1";
	else 
		std::cout << "0";
}
void rectangle::function3()
{
	if(P.y == 0)
		std::cout << "1";
	else 
		std::cout << "0";
}