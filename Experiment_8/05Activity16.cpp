#include <iostream>
using namespace std;
int main(){
    int num1; 
    int num2; 
    int gcd;
        cout << "\n\n Find the Greatest Common Divisor of two numbers:\n";
        cout << "-----------------------------------------------------\n";
        cout << " Input the first number: ";
            cin >> num1;
        cout << " Input the second number: ";
            cin >> num2;        
    for (int i = 1; i <= num1 && i <= num2; i++) 
    {
        if (num1 % i == 0 && num2 % i == 0) 
        {
            gcd = i;
        }
    }
    cout << " The Greatest Common Divisor is: " << gcd << endl;
    return 0;
}