#include <iostream>
using namespace std;
//Using switch statement with a break.
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
    int x;
        cout << "enter any number from 1-3: " << endl;
           cin >> x;
    switch (x){
        case 1:
            cout << "choice 1";
        break;
        case 2:
            cout << "choice 2";
        break;
        case 3:
            cout << "choice 3";
        break;
        default:
            cout << "choice other than 1, 2 and 3";
    }
    return 0;
}