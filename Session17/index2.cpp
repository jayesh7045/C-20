#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5};
    int *ptr {arr};
    cout << *ptr << endl;
    cout<<arr<<endl;
    cout<<*ptr<<endl;
    cout<<arr[0]<<endl;

    cout << *ptr << endl;

    // In this we have 2 pointers which is arr and ptr.
    // In this the arr is the pointer pointing to the array's first element and the ptr is pointing to the integer and both are the pointers but the differece between both is that the array pointer is pointing to only the first element if the array and we can noy makr it point yo any integer but in case of the integer pointer we can point it to the integer variable as well
    
    return 0;
}