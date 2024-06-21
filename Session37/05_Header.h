
#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<memory>
#include<string>
using namespace std;
class Person {
	public:
		string name;
		int rno;
		Person(string name, int rno)
		{
			cout << "05_Header_file" << endl;
			this->name = name;
			this->rno = rno;
		}
		void getPerson(unique_ptr<int> p)
		{
			this->rno = *p;
		}
};
#endif
