#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string name;
    getline(cin, name);
    cout<<name<<endl;
    vector<string> vect;
    int j = 0;
    int i;
    for(i = 0; i < name.size(); i++)
    {
        if(name[i] == ' ')
        {
            string sub = name.substr(j, i-j);
            vect.push_back(sub);
            j = i+1;
        }
    }
    string sub = name.substr(j, i-j);
    vect.push_back(sub);
    for(int i = 0; i < vect.size(); i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// in the line cout<<"Hello world"   -------> The '<<' represents the data is flowing from the "Hello world" string to std::cout and then that cout is printing the data on the console screen
// in the line cin >> name           -------> The '>>' represents that the data is flowing from the console(where the user will put the input) to cin and from cin the data is flowing to name variable which holds the name of the person.
