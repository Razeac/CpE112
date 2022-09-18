#include <iostream>
using namespace std;
//Kenneth Carl Ceazar F. Mendez
int main()
{
    int number;
        cout << "This Program Will Identify If The Number is Divisible by 5 and 10 " << endl;
        cout << "Enter a Number:";
            cin >> number;
    if(number %5 == 0){
        cout << "The Number Is Divisible by 5" << endl;}
    else{
        cout << "The Number Is Not Divisible by 5" << endl;}
    if(number %10 == 0){
        cout << "The Number Is Divisible by 10" << endl;}
   else{
        cout << "The Number is Not Divisible by 10" << endl;}
   if(number %5 == 0 && number %10 == 0){
        cout << "The Number Is Divisible by 5 and 10" << endl;}
    return 0;
}