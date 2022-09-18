#include <iostream>
using namespace std;
#define Magic_Number 26
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
    int value;
    cout <<"Enter a number between 10 to 100: ";
    cin >> value;
    
    if (value == Magic_Number){
        cout <<"Congratulations! You guessed the magic number! \n\n";}
    else if (value > 10 && value < 1000)
        if (value > Magic_Number){
            cout << "Too high!!!\n\n";}
        else{
            cout << "Too low!!!\n\n";}
    else{
        cout << "INVALID ENTRY!!!";}
    return 0;
}