#include <iostream>
using namespace std;
//Using switch statement without a break.
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
    int x;
        cout << "enter any number from 1-3: \n" << endl;
            cin >> x;
    switch (x){
        case 1:
            cout << "choice 1\n";
        case 2:
            cout << "choice 2\n";
        case 3:
            cout << "choice 3\n";
        default:
            cout << "choice other than 1, 2 and 3\n";
    }
    return 0;
}