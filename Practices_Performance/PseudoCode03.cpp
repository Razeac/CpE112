#include <iostream>
using namespace std;
float num1, num2, num3, num4, num5;
char chr;
//Kenneth Carl Ceazar F. Mendez
int main()
{
    cout << "Average finder of 5 Numbers with determining if the average is whole or decimal" << endl;
    cout << "Click 1 to start, Click 2 to end" << endl;
        cin >> chr;
    switch (chr){
        case '1':{
            cout << "Enter your numbers:" << endl;
                cin >> num1 >> num2 >> num3 >> num4 >> num5;
            float ans = (num1 + num2 + num3 + num4 + num5) / 5;
                if (ans == (int)ans){
                    cout << "The average is " << ans << " and is a Whole Number" << endl;}
                else{
                    cout << "The average is " << ans << " S" << endl;}
        break;}
        case '2':{
            cout << "Program Ended" << endl;
        break;}

    default:
        cout << "Error Try Again!!!" << endl;}
   return 0;
}