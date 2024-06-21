// At any given moment there can only be one pointer managing the memory
// Memory is automatically released when the pointer goes out of scope
// We can make the use of smart pointers using the <memory> headers
// Note that we can declare the objects in 2 ways

// 1. Statically creating the object
// --> Dog dog1("Happy")
// --> Here the dog1 object is created and stored in a memory stack. 
// So if the object goes out of scope then the memory associated with it is released 
// automatically.

// 2. Dynamically creating the objects
// --> Dog *dog1 = new Dog("Happy dog")
// --> delete dog1;
// --> Here the dog1 is the pointer to the instance of the object Dog and is 
// creating dynamically and stored in the heap memmory location and the user 
// needs to take care of releasing the memory by making the use of the delete 
// operator.  
 
// So we want to use the heap memory and the pointer must also be deleted by default

// With normal pointers if the user forgets to call the delete ptr1, then there will be the memory leak.
// Smart pointer allow us to make use of the objects created in the heap memory and then deallocate it automatically
// Whenever the smart pointers goes out of scope then the memory is deallocated automatically
// We can now explore how we can work with the unique ptr to allocated and deallocate the memory


#include<iostream>
#include<memory>
using namespace std;
class Dog {
public:
	string	name;
	int rno;
	Dog(string name, int rno)
	{
		this->name = name;
		this->rno = rno;
	}
	void printData()
	{
		cout << name << " " << rno << endl;
	}
};
int main()
{
	Dog *dog_temp = new Dog("Happy", 101);
	unique_ptr<Dog> dog1{ dog_temp };
	dog_temp = nullptr;				// Here we can make the dog_temp point to nullptr so that we are not using it and using the dog1 as the pointer.  
	dog1->printData();



	unique_ptr<Dog> dog2{ new Dog("Buddy", 102) };  // This is the smart pointer
	dog2->printData();

	unique_ptr<int> n1{ new int(200) };
	cout << *n1 << endl;

	// the std::make_unique is used to do {new Dog("Joggy", 303)} --> so this line "make_unique<Dog>("Joggy", 303) --> This line internally is doing {new Dog("Joggy", 303)}"
	unique_ptr<Dog> dog3 = make_unique<Dog>("Joggy", 303);
	dog3->printData();


	unique_ptr<int> n2 = make_unique<int>(400);
	cout << "The value of the n2 variable is --> " << *n2 << endl;


	cout << "dog3 is pointing to the address of --> " << dog3.get() << endl;
	cout << "n2 is pointing to the addredd of ---> " << n2.get() << endl;

	return 0;
}

// Here we have first created a pointer dynamically and then we have also created a unique pointer 
// and now we have created a instance of the unique pointer with the help of the dynamically allocated pointer
// so the dog_temp is a dynamically allocated memory in the heap which the user is responsible to delete by himself and,
// The dog1 is the memory created by the unique pointer which will be automatically deallocated automatically by itself.

// Whenever the scope of the unique ptr goes out of scope then the destructor for that variable is automatically called.
