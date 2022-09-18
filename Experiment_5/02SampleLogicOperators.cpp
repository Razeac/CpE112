#include <iostream>
using namespace std;
#define PI 3.1415926525
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
    char choice;
    float Area;
    int height, base, radius;
        cout << "1. Triangle\n";
        cout << "2. Circle\n";
        cout << "Enter Your Choice\n";
            cin >> choice;
    if (choice == '1'){
        cout << "\nEnter Height:";
            cin >> height;
        cout << "\nEnter Base:";
            cin >> base;
        Area = 0.5 * height * base;
        cout << "\n\nArea is " << Area;}
    else if (choice == '2'){
        cout << "\nEnter Radius:";
            cin >> radius;
        Area = PI * radius * radius;
        cout << "\n\nArea is " << Area;}
    else{
        cout << "Invalid Choice!!\n";}
return 0;
}