#ifndef CAR_H
#define CAR_H
#include<iostream>
#include<string>

using namespace std;

class Car {
	public:
		string name;
		int modelno;
		Car(string name, int modelno)
		{
			cout << "Constructor called for " << name << " model-no " << modelno << endl;
			this->name = name;
			this->modelno = modelno;
		}
		void getData();
		void showData(); 
};
#endif
