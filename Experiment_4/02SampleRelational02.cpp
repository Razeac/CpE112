#include <iostream>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
    int X, Y, Diff;
        cout << "Enter first number: ";
            cin >> X;
        cout << "Enter second number: ";
            cin >> Y;
        if (X < Y){
            Diff = Y - X;
            cout << "The difference between " << Y << " and " << X << " is " << Diff;}
        else{
            Diff = X - Y;
            cout << "The difference between " << X << " and " << Y << " is " << Diff;}
    return 0;
}