#include <iostream>
#include <cstring>
using namespace std;
int main()
{

	// if we want to make an array of strings then we have 2 methods
	// First 1 .
	// To make the 2D array of charecters
	
	const char arr_method1[][90] = {
		"a lot of kinds running in the backyard!",
		"a lot of empty beer bootles on your work table.",
		"you Partying too much with kids wearing weird clothes.",
		"you running away from something really scary",
		"clouds gathering in the sky and an army standing ready for war",
		"dogs running around in a deserted empty city",
		"a lot of cars stuck in a terrible traffic jam",
		"you sitting in the dark typing lots of lines of code on your dirty computer",
		"you yelling at your boss. And oh no! You get fired!",
		"you laughing your lungs out. I've never seen this before.",
		", huum, I don't see anything",
		"you drinking wine"};
    
	// In the above method the problem is that
	cout << sizeof(arr_method1[0]) / sizeof(char) << endl; // This will print 90..because every string even if it
														   // consists of only 10 letters, still it will ocuppy the space of 90 chars
														   // So this is the waste of memory
														   // The string arr_method1[0] occupies the 38 chars but size of 90 chars.
														   // So the size is wasted
														   // strlen(arr_method1) --> 38 but sizeof(arr_method1)/sizeof(char) --> 90


	const char *predictions[]{
		"a lot of kids running in the backyard!",
		"a lot of empty beer bootles on your work table.",
		"you Partying too much with kids wearing weird clothes.",
		"you running away from something really scary",
		"clouds gathering in the sky and an army standing ready for war",
		"dogs running around in a deserted empty city",
		"a lot of cars stuck in a terrible traffic jam",
		"you sitting in the dark typing lots of lines of code on your dirty computer",
		"you yelling at your boss. And oh no! You get fired!",
		"you laughing your lungs out. I've never seen this before."};

		cout<<predictions[0]<<endl;
		cout<<sizeof(predictions[0])/sizeof(char)<<endl;
	
		// In this case as the prediction[0] is a pointer so it will print its size as 4 
		// No matter what long string is stored in th prediction[0] but it will always print 4 i.e the size of the pointer.
		// All the pointers have the same size, even if its the int pointer, float pointer, char pointer or string pointer.... all will have the same size and that size will be dependent on the system config
		// So the size of the pointer is always 4 bytes for our system.

		

		cout<<"******************************************************************"<<endl;
		const char* temp = "Jayeshksdjskdjskdjskdj";
		cout<<sizeof(char*)<<endl;
		cout<<sizeof(int*)<<endl;
		cout<<sizeof(double*)<<endl;



	return 0;
}