#include <iostream>
#include <cmath>
#define pi 3.1415926535

using namespace std;

int main()
{
    int side_a, side_b;
    double side_c, Angle_A, Angle_B;


    cout << "Enter the value of side_a: ";
    cin >> side_a;
    cout << "Enter the value of side-b: ";
    cin >> side_b;

    side_c = sqrt(pow(side_a, 2)+pow(side_b, 2)*(180/pi));
    Angle_A = asin(side_a / side_c)* (180/pi);
    Angle_B = atan(side_b / side_a)* (180/pi);

    cout << "The value of side c = " << side_c << endl;
    cout << "The value of Angle A = " << Angle_A << " degrees" << endl;
    cout << "The value of Angle B = " << Angle_B << " degrees"<< endl;

    return 0;
}
