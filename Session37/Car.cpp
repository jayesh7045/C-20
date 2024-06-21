#include "Car.h"
#include<iostream>
using namespace std;
void Car:: getData()
{
	cout << "Enter car name" << endl;
	cin >> this->name;
}
void Car::showData() {
	cout << "Car name is " << name << endl;
	cout << "Model no is " << modelno << endl;
}