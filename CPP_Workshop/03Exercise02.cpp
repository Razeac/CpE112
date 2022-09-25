#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string firstName;
    string lastName;
    int age;

        cout << "Please enter your first name(s): ";
    getline(cin, firstName);
        cout << "Please enter your surname: ";
    getline(cin, lastName);
        cout << "Please enter your age: ";
            cin >> age;
        cout << endl;
        cout << "Welcome " << firstName << " " << lastName << endl;
        cout << "You are " << age << " years old." << endl;
}