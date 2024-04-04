#include<iostream>

/**
 * @brief 
 * 
 */
class point
{
public:
	int x ;
	int y ;
};
class rectangle
{
private:
	point P;
	point A,//левая-верхняя
	B,//правая-верхня
	C,//правая-нижня
	D;//левая-нижняя
	int AB, BC, CD, AD;
public:
	rectangle(point a,point c,point p1); // конструктор  
	//void pointer(point p);
	void print(); // вывод 
	void coordinate();
	void side();
	void square();
	void function1();
	void function2();
	void function3();
};
