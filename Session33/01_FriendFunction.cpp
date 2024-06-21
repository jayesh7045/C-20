#include<iostream>
using namespace std;
class A {
	private:
		int a, b;
	public :
		A(int a, int b) : a( a ), b( b )
		{
			cout << "Constructor of the A is called" << endl;
		}
		friend void getValues(A& a);
};
void getValues(A& obj)
{
	cout << obj.a << " " << obj.b << endl;
}
int main()
{
	A a(1, 2);
	getValues(a);
	return 0;
}


// Notes
// 1) Agar kisi bhi class me friend function ko apply karna hai toh pehle class define karna padega and then define the friend function.
// 2) Pehle function likha and then class define kiya toh nhi chalega
// 3) Whenever any Function is accessing the object of any class so that function must be knowing the structure of that class.