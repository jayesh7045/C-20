#include"Point.h"
#include<iostream>
using namespace std;
Point::Point(double x, double y) : m_x{ x }, m_y{ y }
{
	cout << "Const 1 is called" << endl;
}
Point::Point(double xy) :Point(xy, xy)
{
	cout << "const 2 is called" << endl;
}
Point::Point() : m_x{1}, m_y{1}
{
	cout << "Const 3 is called" << endl;
}
Point::~Point()
{
	cout << "Destructor is called" << endl;
}