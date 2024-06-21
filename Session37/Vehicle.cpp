#include "Vehicle.h"
#include<iostream>
using namespace std;
void Vehicle :: getName()
{
	cout << "The name is " << name << " rno is " << rno << " speed is " << speed << endl;
}
void Vehicle::getCar(unique_ptr<Car> car)
{
	cout << "The car name is " << car->name << " model no is " << car->modelno << endl;
}