#include <iostream>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{   
    int Foods;
    int Hamburger, Frenchfries, Pizza, Sandwiches;
    int num;
    int ord;
        Hamburger = 200;
        Frenchfries = 50;
        Pizza = 500;
        Sandwiches = 150;
            cout << "Menu\n";
            cout << "Please enter the number of your order\n";
            cout << "1 = Jolibee Yumburger \n";
            cout << "2 = Mcdonalds BFF Fries \n";
            cout << "3 = Greenwich 4in1 Overload Pizza \n";
            cout << "4 = Subway BLT Sandwich \n";
            cout << "PLEASE ENTER YOUR ORDER \n";
                cin >> Foods;
        
    switch(Foods)
        {
            double  ord,num;
            case 1: 
                cout << "You ordered Jolibee Yumburger! How many orders would you like? \n";
                cout << "NUMBER OF ORDERS (200Php/pc): ";
                    cin >> num;
                ord = Hamburger * num; 
                cout << "You ordered " << num << " Yumburger/s! ";
                cout << "Total amount: Php" << ord;
                break;

            case 2: 
                cout << "You ordered Mcdonalds BFF Fries! How many orders would you like? \n";
                cout << "NUMBER OF ORDERS (50Php/pc): ";
                    cin >> num;
                ord = Frenchfries * num;
                cout << "You ordered " << num << " BFF Fries! ";
                cout << "Total amount: Php" << ord;
                break;

            case 3: 
                cout << "You ordered Greenwich 4in1 Overload Pizza! How many orders would you like? \n";
                cout << "NUMBER OF ORDERS (500Php/pc): ";
                    cin >> num;
                ord = Pizza * num;
                cout << "You ordered " << num << " Pizza/s! ";
                cout << "Total amount: Php" << ord;
                break;

            case 4: 
                cout << "You ordered Subway BLT Sandwich! How many orders would you like? \n";
                cout << "NUMBER OF ORDERS (150Php/pc): ";
                    cin >> num;
                ord = Sandwiches * num;
                cout << "You ordered " << num << " Sandwich/es! ";
                cout << "Total amount: Php" << ord;
                break;

            default:
                    cout << "Invalid choice";
                break;
        }
    return 0;
}