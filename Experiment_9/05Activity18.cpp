#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    cout << "\n\t\t\tWelcome to Guess The Number game!" << endl;
    cout << "You have to guess a number between 1 and 100. " << endl;
    cout << "\nYou have 10 choices for finding the secret number between 1 and 100.";
        int left = 10;
    for (int i = 1; i <= 10; i++){
        srand(time(0));
        int secret = 1 + (rand() % 100);
        int choices;
        cout << "\n\nEnter the number: ";
            cin >> choices;
        if (choices == secret){
            cout << "Well played! You won, " << choices << " is the secret number" << endl;
            cout << "\t\t\t Thanks for playing...." << endl;
            cout << "Play the game again with us!!\n\n" << endl;
        break;}
        else{
                cout << "Nope, " << choices << " is not the right number\n";
            if (choices > secret){
                cout << "The secret number is smaller than the number you have chosen" << endl;}
            else{
                cout << "The secret number is greater than the number you have chosen" << endl;}
                left--;
                cout << left << " choices left. " << endl;
            if (choices == 0) {
                cout << "You couldn't find the secret number, it was " << secret << ", You lose!!\n\n";
                cout << "Let's Play Again :D\n\n";}
        }
    }
}