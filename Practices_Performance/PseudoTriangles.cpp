#include <iostream>
using namespace std;
//Kenneth Carl Ceazar F. Mendez
int main()
{
    int Angle_A;
    int Angle_B;
    int Angle_C;
        cout << "Isosceles, Scalene or Equilateral Triangle\n" << endl;
        cout << "Enter Angle A: " << endl;
            cin >> Angle_A;
        cout << "Enter Angle B: " << endl;
            cin >> Angle_B;
        cout << "Enter Angle C: " << endl;
            cin >> Angle_C;
    if(Angle_A == Angle_B && Angle_B== Angle_C){
        cout << "Equilateral triangle" << endl;}
    else if(Angle_A == Angle_B){
        cout << "Isosceles triangle." << endl;}
    else if(Angle_A == Angle_C){
        cout << "Isosceles triangle." << endl;}
    else if(Angle_B == Angle_C){
        cout << "Isosceles triangle." << endl;}
    else{
        cout << "Scalene triangle." << endl;}
    return 0;
}
