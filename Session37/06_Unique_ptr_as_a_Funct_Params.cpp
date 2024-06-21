#include<iostream>
#include<memory>
#include<string>
#include "Car.h"
using namespace std;
void func(unique_ptr<Car> c1)
{
	 c1->showData();
	 return;
}
int main()
{
	unique_ptr<Car> audi = make_unique<Car>("Audi", 1001);
	audi->showData();
	// func(audi) --> This is illegal move and we can not pass a copy of the data in the function parameter.
	//  We can not make a copy of the pointer that can point to a same location. Means 2 pointers pointing to same location can not be made. 
	// It will give us a compiler error




	func(move(audi));
	// In the above code, the membership will be moved to the function and the copy will not be created and the pointer will be destroyed when the function returns.


	return 0;
}