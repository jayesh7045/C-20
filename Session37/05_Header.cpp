#include<iostream>
#include "05_Header.h"
#include<memory>
using namespace std;
void Person :: getPerson(unique_ptr<int> p)
{
	this->rno = *p;
}