#include <iostream>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
    double celsius, fahrenheit, temp;
    char unit;
        cout << "Enter the temperature you wish to convert followed by C for Celsius or F for Fahrenheit: " << endl;
            cin >> temp;
            cin >> unit;
            cin >> celsius;
            cin >> fahrenheit;
    switch (unit)
    {
    case 'C':
        temp = celsius;
        fahrenheit = (9.0 / 5.0) * (celsius + 32.0);
            cout << fahrenheit << " degrees fahrenheit" << endl;
        break;

    case 'c':
        temp = celsius;
        fahrenheit = (9.0 / 5.0) * (celsius + 32.0);
            cout << fahrenheit << " degrees fahrenheit" << endl;
        break;

    case 'F':
        temp = fahrenheit;
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
            cout << celsius << " degrees celsius" << endl;
        break;

    case 'f':
        temp = fahrenheit;
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
            cout << celsius << " degrees celsius" << endl;
        break;

    default:
            cout << "Invalid Format";
        break;    
    }
    return 0;
}