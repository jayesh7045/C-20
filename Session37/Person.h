#include <string>
#include <iostream>
#include<memory>
#ifndef PERSON_H
#define PERSON_H
#include "Dog.h"
using namespace std;
class Person {
	public:
		Person(string name, int rno)
		{
			this->name = name;
			this->rno = rno;
			cout << "Contructor of the Person Called" << endl;
			return;
		}
		void PrintData();
		void getData();
		void adopt_dog(unique_ptr<Dog> dog1);
	private:
		string name;
		int rno;
};

#endif

