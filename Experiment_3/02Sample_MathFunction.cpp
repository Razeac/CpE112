#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 0.25, result;
    result = asin(x);

    cout << "asin(x) = "  << result <<  " radians" << endl;

    // result in degrees
    cout << "asin(x) = " << result * 180/3.1415 << " degrees" << endl;

    return 0;
}