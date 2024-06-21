#ifndef VEHICLE_H
#define	VEHICLE_H
#include "Car.h"
#include<iostream>
#include<string>
using namespace std;
class Vehicle {
	public:
		string name;
		int rno;
		int speed;
	Vehicle(string name, int rno, int speed)
	{
		cout << "Constructor of the vehicle is called" << endl;
		this->name = name;
		this->rno = rno;
		this->speed = speed;
	}
	void getName();
	
	void getCar(unique_ptr<Car> car);

};
#endif