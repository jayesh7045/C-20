#include<iostream>
#include "Person.h"
#include "Dog.h"
using namespace std;
void Person::PrintData()
{
	cout << "The name is " << name << " rno is " << rno << endl;
}
void Person::getData()
{
	int x;
	string y;
	cin >> y >> x;
	this->name = y;
	this->rno = x;
}
void Person::adopt_dog(unique_ptr<Dog> dog1)
{
	string dog_name = dog1->get_name();
	cout << "Congrats ! your dog "<<dog_name<<" has been adopted" << endl;
}