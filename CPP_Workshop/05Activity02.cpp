#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables.
    int guessCount = 0;
    int minNumber = 0;
    int maxNumber = 0;
    int randomNumber = 0;
    string input = "";
    bool bIsRunning = true;
    
    while (bIsRunning)
    { 
        // Output instructions and get user inputs.
            cout << "***Number guessing game***\n";
            cout << "\nEnter the number of guesses: ";
        getline(cin, input);
        guessCount = stoi(input);
        
            cout << "Enter the miniumum number: ";
        getline(cin, input);
        minNumber = stoi(input);
        
            cout <<"Enter the maximum number: ";
        getline(cin, input);
        maxNumber = stoi(input);
        
        // Generate random number within range.
        srand((unsigned)time(0));
        randomNumber = rand() % (maxNumber - minNumber + 1) + minNumber;
        
        // Process user guesses.
        for (int i = 0; i < guessCount; ++i){
            int guess = 0;
            
                cout << "\nEnter your guess: ";
            getline(cin, input);
            guess = stoi(input);
            
            if (guess == randomNumber){
                    cout << "Well done, you guessed the number!\n";
                break;}
            
            int guessesRemaining = guessCount - (i + 1);
                cout << "Your guess was too " << (guess < randomNumber ? "low. " : "high. ");
                cout << "You have " << guessesRemaining << (guessesRemaining > 1 ? " guesses" : " guess") << " remaining";}
        
            cout << "\nEnter 0 to exit, or any number to play again: ";
        getline(cin, input);
        if (stoi(input) == 0){
            bIsRunning = false;}
    }
}