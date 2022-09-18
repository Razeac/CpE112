#include <iostream>
using namespace std;
#define MAGIC_NUMBER 26

int main()
{
    int Value;
    cout << "Guess the magic number: ";
    cin >> Value;
        if (Value != MAGIC_NUMBER){
            cout << "Incorrect" << endl;
        }
        if (Value > MAGIC_NUMBER){
            cout << "Too High!!!" << endl;
        }
        if (Value < MAGIC_NUMBER){
        cout << "Too Low!!!" << endl;
        }
        if (Value == MAGIC_NUMBER){
        cout << "Congratulations! You guessed the magic number!\n\n";
        }
    return 0;
}