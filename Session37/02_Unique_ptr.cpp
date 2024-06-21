#include<iostream>
#include<memory>
using namespace std;
class Dog {
public:
	string name;
	int rno;
	Dog(string name, int rno)
	{
		this->name = name;
		this->rno = rno;
	}
	void printData() {
		cout << "Name :- " << name << " rno :- " << rno << endl;
	}
};
int main()
{
	unique_ptr<Dog> dog1 = make_unique<Dog>("Happy", 1001);
	dog1->printData();

	// unique_ptr<Dog> dog2 = dog1;  -> This is the invalid syntax as the unique_ptr can not point to any another location and hence the line will be giving the syntax error.
	// unique_ptr<Dog> dog3{dog1}	-> This is the invalid syntax as the unique_ptr can not point to any another location and hence the line will be giving the syntax error.
	// But if we want to move the responsibilities of one pointer to another pointer the we can make the use of the move keyword
	cout << dog1.get() << endl;  // --> This will print the value of the address at which the dog1 is pointing to 
	unique_ptr<Dog> dog4 = move(dog1);  // Here the dog4 is pointing to the dog1 as well because the dog4 here has been given the responsibilities of the dog1
	dog4->printData();
	cout << dog1.get() << " " << dog4.get() << endl;  // Here the value of the dog1.get() will be zero why ?

	/*
		
		In C++, std::unique_ptr's get() member function returns a raw pointer to the managed object, or nullptr if the std::unique_ptr does not own any object. 
		If you see that dog1.get() returns 0 (which is nullptr), it indicates that dog1 no longer owns a resource.
	
	*/

	// dog1->printData(); --> This line will be giving the run time error. And this is because now the dog1 is pointing to a nullpointer and we can not access the resources 
	// because the resources are not associated with the dog1

	if (dog1)
	{
		cout << "dog1 is pointing to the address " << dog1.get();
	}
	else
	{
		cout << "dog1 is a nullptr" << endl;
	}
	dog4.reset();
	// dog4->printData();      --> This line will be giving the run time error. And this is because now the dog4 is pointing to a nullpointer and we can not access the resources 
	// because the resources are not associated with the dog4

	if (dog4)
	{
		cout << "dog4 is pointing to the address " << dog4.get() << endl;
	}
	else
	{
		cout << "dog4 is a nullptr" << endl;
	}
	return 0;
}