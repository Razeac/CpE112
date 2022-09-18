#include <iostream>
using namespace std;
//Program that will ask the user to input 1-10,999 Then convert it into word
//Created by Mendez, Kenneth Carl Ceazar F. with the guidance of Eligue,Jumarri Tandoc
int main()
{
    int num;
        cout << "enter any number from 1-10999: \n" << endl;
            cin >> num;
        int ones_digit;
        int tens_digit;
        int hund_digit;
        int thou_digit;
        num = num%10000;       
        thou_digit = num / 1000;
        switch (thou_digit)
        {
        case 1:
            cout << "one thousand";
            break;
        case 2:
            cout << "two thousand";
            break;
        case 3:
            cout << "three thousand";
            break;
        case 4:
            cout << "four thousand";
            break;
        case 5:
            cout << "five thousand";
            break;
        case 6:
            cout << "six thousand";
            break;
        case 7:
            cout << "seven thousand";
            break;
        case 8:
            cout << "eight thousand";
            break;
        case 9:
            cout << "nine thousand";
            break;
        case 10:
            cout << "ten thousand";
            break;
        }
        num = num%1000;
        hund_digit = num / 100;
        switch (hund_digit)
        {
        case 1:
            cout << " one hundred";
            break;
        case 2:
            cout << " two hundred";
            break;
        case 3:
            cout << " three hundred";
            break;
        case 4:
            cout << " four hundred";
            break;
        case 5:
            cout << " five hundred";
            break;
        case 6:
            cout << " six hundred";
            break;
        case 7:
            cout << " seven hundred";
            break;
        case 8:
            cout << " eight hundred";
            break;
        case 9:
            cout << " nine hundred";
            break;
        }       
        num = num%100;
        tens_digit = num / 10;
        if (num >= 11 || num <= 19)
        {
            switch (num)
            {
                case 11:
                    cout << " eleven";
                    break;
                case 12:
                    cout << " twelve";
                    break;
                case 13:
                    cout << " thirteen";
                    break;
                case 14:
                    cout << " fourteen";
                    break;
                case 15:
                    cout << " fifteen";
                    break;
                case 16:
                    cout << " sixteen";
                    break;
                case 17:
                    cout << " seventeen";
                    break;
                case 18:
                    cout << " eighteen";
                    break;
                case 19:
                    cout << " nineteen";
                    break;
            }
        }
            switch (tens_digit)
            {
                case 1:
                    cout << " ten";
                    break;
                case 2:
                    cout << " twenty";
                    break;
                case 3:
                    cout << " thirty";
                    break;
                case 4:
                    cout << " fourty";
                    break;
                case 5:
                    cout << " fifty";
                    break;
                case 6:
                    cout << " sixty";
                    break;
                case 7:
                    cout << " seventy";
                    break;
                case 8:
                    cout << " eighty";
                    break;
                case 9:
                    cout << " ninety";
                    break;
            }     
        ones_digit = num%10;
        switch (ones_digit)
        {
        case 1:
            cout << " one";
            break;
        case 2:
            cout << " two";
            break;
        case 3:
            cout << " three";
            break;
        case 4:
            cout << " four";
            break;
        case 5:
            cout << " five";
            break;
        case 6:
            cout << " six";
            break;
        case 7:
            cout << " seven";
            break;
        case 8:
            cout << " eight";
            break;
        case 9:
            cout << " nine";
            break;
        }
}