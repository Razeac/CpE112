#include <iostream>
using namespace std;
//Sinple Calculator. Using simple operators.
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
    char op;
    float num1, num2, result;

    /* Print Welcome Message */
        cout << "WELCOME TO SIMPLE CALCULATOR\n" << endl;
        cout << "----------------------------\n" << endl;
        cout << "Enter operation [+ - * /]: " << endl;
    /* Input two number and operator from user */
            cin >> op;
        cout << "Enter First Number: ";
            cin >> num1;
        cout << "Enter Second Number: ";
            cin >> num2;
    /* Switch the value and perform action based on operator */
    switch (op)
    {
    case '+':
            result = num1 + num2;
        break;
    
    case '-':
            result = num1 - num2;
        break;
    
    case '*':
            result = num1 * num2;
        break;
    
    case '/':
            result = num1 / num2;
        break;
    
    default:
        cout << "Invalid operator" << endl;
    }
        cout << num1 <<" " << op <<" " << num2 <<" = " << result;
    return 0;
}