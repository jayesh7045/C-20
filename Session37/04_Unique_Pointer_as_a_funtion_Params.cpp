#include<iostream>
#include "Person.h"
#include "Dog.h"
using namespace std;

int main()

{
	unique_ptr<Dog> dog1 = make_unique<Dog>("Chappu");
	Person *p = new Person("Jayesh", 100);
	p->getData();
	p->PrintData();
	cout << dog1.get();
	p->adopt_dog(move(dog1));
	cout << dog1.get();
	
	return 0;
}