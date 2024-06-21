#include<iostream>
#include "05_Header.h"
#include<memory>
using namespace std;

int main()
{
	unique_ptr<Person> p = make_unique<Person>("Jayesh", 37);
	p->getPerson(make_unique<int>(200));
	cout << p->rno << endl;

	return 0;
}