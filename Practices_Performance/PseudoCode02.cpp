#include <iostream>
using namespace std;
//Create a C++ program that will ask the user to press any character. 
//The program will then determine if the user press a number, a letter or a special character.
//Kenneth Carl Ceazar F. Mendez
int main() 
{
    char ch;
        cout << "Enter any character : ";
        cin >> ch;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        cout << endl << ch << " is Letter.";} 
    else if(ch >= '0' && ch <= '9'){
        cout << endl << ch << " is Number.";} 
    else{
        cout << endl << ch << " is Special Character.";}
    return 0;
}