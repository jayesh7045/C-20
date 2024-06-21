#include "Dog.h"
#include<iostream>
#include<memory>
using namespace std;

Dog::Dog(const std::string& params) : m_dog_name(params) {
    cout << "Constructor for dog class has been called" << endl;
}

Dog::~Dog() {
    cout << "Destructor for the "<<m_dog_name<<" class is called" << endl;
}
