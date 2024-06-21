#pragma once
#include<iostream>
using namespace std;
class Point {
public:
	Point(double x, double y);
	Point();
	// Point(Point& p);
	Point(double xy);
	~Point();
	double length() const;

	size_t get_Point_count() const {
		return m_point_count;
	}
private:
	double m_x;
	double m_y;
	inline static size_t m_point_count{}; // This is possible only in C++ 17 and above
};


// We can not initialize the static variable in the class, but if we want to initialize the static variable in the class, then we must use the inline keyword.
// By using inline keyword, we can initialize the static variable 