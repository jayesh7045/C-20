#include<iostream>
using namespace std;
class Animal {
public:
	Animal(string name, int rno) : name{name}, rno{rno}
	{
		cout << "Constructor of Animal class is called" << endl;
	}

private:
	string name;
	int rno;
	friend class Cat;
};
class Cat {
public : 
	void getAnimalInfo(Animal &a)
	{
		cout << a.name << " " << a.rno << endl;
	}
};
int main()
{
	Animal a("Jangi", 10);
	Cat c;
	c.getAnimalInfo(a);
	return 0;
}