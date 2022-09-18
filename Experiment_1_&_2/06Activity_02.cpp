#include <iostream>
#include <iomanip>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
    int square_side = 15;
    double rectangle_length = 10;
    int rectangle_width = 8;
    int radius = 15;
    int number_1 = 15.667;
    int number_2 = 20;
    int number_3 = 25;
    int Money = 9.50;
    double PI = 3.1415926535;
    int sqr_Area=50;
    float cir_Area;
    float rec_Area;

    cir_Area = PI * radius * radius;
    sqr_Area = square_side * square_side;
    rec_Area = rectangle_length * rectangle_width;
        cout << "first number is " << number_1 << endl;
        cout << "second number is " << number_2 << endl;
        cout << "Area of Square is " << sqr_Area << " square units" << endl;
        cout << "Area of Rectangle is " << rec_Area << " square units" << endl;
        cout << fixed << setprecision (3) << "Area of Circle is " << cir_Area << " square units" << endl;
        cout << fixed << setprecision (4) << "Area of Circle is " << cir_Area << " square units" << endl;
        cout << fixed << setprecision (5) << "Area of Circle is " << cir_Area << " square units" << endl;
    return 0;
}
