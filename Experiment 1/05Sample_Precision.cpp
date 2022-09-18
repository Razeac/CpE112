#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float Money = 9.5;
    double PI = 3.1415926535;
    cout << fixed <<"(default fixed) 6 decimal place: "<< PI << endl;
    cout << fixed << setprecision (1) << "1 decimal place " << Money << endl;
    cout << fixed << setprecision (2) << "2 decimal place "<< PI << endl;
    cout << fixed << setprecision (3) << "3 decimal place " << Money << endl;
    cout << fixed << setprecision (4) << "4 decimal place "<< PI << endl;

    return 0;
}
