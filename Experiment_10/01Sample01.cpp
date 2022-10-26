#include <iostream>
using namespace std;

int main()
{
    int avg = 0;
    int sum = 0;
    int x = 0;
//Array declaration length - 4
    int num[4];
        for (x = 0; x < 4; x++)
        {
            cout << "Enter number " << (x+1) << ": ";
                cin >> num[x];
        }
        for (x = 0; x < 4; x++)
        {
            sum = sum+num[x];
        }
        avg = sum / 4;
            cout << "Average of entered number is: " << avg;
return 0;
}