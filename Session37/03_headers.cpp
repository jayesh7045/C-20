#include<iostream>
#include<memory>
#include "Dog.h"
using namespace std;

int main()
{
	Dog dog1("Hello");
	dog1.print_dog();
	unique_ptr<Dog> dog2 = make_unique<Dog>("Happy"); // For this the destructor will be called automatically.
	dog2->print_dog();

	Dog* dog3 = new Dog("Doggy Doggy");
	unique_ptr<Dog> dog5{ dog3 };
	dog5->print_dog();

	return 0;
}