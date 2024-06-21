#include "Point.h"
#include<iostream>

using namespace std;
int main()
{
	Point points[]{ Point(1, 2), Point(3, 4), Point(), Point(1)};
	cout << "All constructors of the Point class is called" << endl;
	return 0;
}
