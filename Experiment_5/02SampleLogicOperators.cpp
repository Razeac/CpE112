#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.1415926525
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
    char choice;
    float Area;
    int height, base, radius;
        cout << "T. Triangle\n";
        cout << "C. Circle\n";
        cout << "Enter Your Choice\n";
            cin >> choice;
    if (choice == 'T'){
        cout << "Enter Height:";
            cin >> height;
        cout << "Enter Base:";
            cin >> base;
        Area = 0.5 * height * base;
        cout << fixed << setprecision (4) << "Area is " << Area;}
    else if (choice == 'C'){
        cout << "Enter Radius:";
            cin >> radius;
        Area = PI * radius * radius;
        cout << fixed << setprecision (4) << "Area is " << Area;}
    else{
        cout << "Invalid Choice!!\n";}
return 0;
}
