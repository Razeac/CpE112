#include <iostream>
using namespace std;
int main(){
    int Value;
        cout << "Enter a positive number: ";
            cin >> Value;
    do{
        cout << Value << " - ";
        Value--;} 
    while (Value >= 0);
        cout << "Done! \n\n\n";
return 0;}