#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x = 0;
    string Cpe;
    string username ="Cpestudent", Password ="Cpe2022";
    string Usernametest, Passwordtest;
    
    Cpe:
        cout << "Are you a CpE student yes or no?:";
            cin >> Cpe;
    if( Cpe == "yes"){
        goto login;}
    else if( Cpe == "no"){
            cout << "\nYou dont have authorized to log in here in our program.";
        return 0;}
    else{
            cout << "Invald Input! Please choose yes or no\n\n";
        system("pause");
        system("cls");
        goto Cpe;}
    
    login:
        cout << "Username: ";
            cin >> Usernametest;
        cout << "Password: ";
            cin >> Passwordtest;
    if((username == Usernametest ) && (Password == Passwordtest)){
        cout << "Succesful login!\n\n";
        cout << "WELCOME STUDENT!!\n\n";
        goto numsum;}
    else{
    
    x++;
        cout << "\n\nInvalid username and password";}
    if( x==1){
        cout << "\nYou have 2 attempts left.\n\n";
        goto login;} 
    else if(x==2){
        cout << "\nYou have 1 attempts left.\n\n";
        goto login;}
    else if(x==3){
        cout << "\nYou have no remaining attempts left.";
        return 0;}
    
    numsum:{
        int num[5], i;
        int even;
            cout << "Enter 5 numbers:\n";
            cout << "----------------------------\n" << endl;
        for (i=0; i<5; i++)
            cin >> num[i];
        for (i=0; i<5; i++)
            {
            if (num[i] % 2 == 0)
            even = even + num[i];
            }
            cout << "The sum of even numbers: " << even;}  
}