#include <iostream>
using namespace std;

int main()
{
int Value;
    cout << "Please enter number greater than 10:";
    cin >> Value;
    if (Value > 10) {     
        cout << "Thank you very much!!!\n\n\n";
    }
    else { 
        cout << "Wrong entry! Please read the instruction!\n\n\n";
    }
    return 0;
}