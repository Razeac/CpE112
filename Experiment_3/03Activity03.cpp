#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.1415926525

using namespace std;

int main()

{
    float hypotenuseC;
    float adjacentA, oppositeB;
    float angleA, angleB;

        cout << "This will solve the hypotenuse of a right triangle." << endl;
        cout << "Adjacent::";
        cin >> adjacentA;
        cout << "Opposite::";
        cin >> oppositeB;
            hypotenuseC = sqrt (pow(adjacentA,2)+(pow(oppositeB,2)));
        cout << fixed << setprecision(4) << "The hypotenuse is = " << hypotenuseC << endl;
        cout << endl;

        cout << "This will solve the degree of angle A." << endl;
        cout << "Adjacent::";
        cin >> adjacentA;
        cout << "Opposite::";
        cin >> hypotenuseC;
            angleA = asin(adjacentA/oppositeB);
        cout << "angle A is " << angleA * 180/PI << " degrees" << endl;
        cout << endl;

        cout << "This will solve the degree of angle B." << endl;
        cout << "Opposite::";
        cin >> oppositeB;
        cout << "Adjacent::";
        cin >> adjacentA;
            angleB = atan(oppositeB/adjacentA);
        cout << "Angle B is " << angleB * 180/PI << " degrees" << endl;
        cout << endl;
    
    return 0;
}