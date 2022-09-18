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
        char op;
        int sum;
        float num1, num2, num3, num4, num5, result;
            cout << "The Sum of All Even Numbers\n";    
            cout << "Enter 5 Numbers\n" << endl;
            cout << "----------------------------\n" << endl;
                cin >> num1;
                cin >> num2;
                cin >> num3;
                cin >> num4;
                cin >> num5;
        sum = num1 + num2 + num3 + num4 + num5;
        if ( sum % 2 == 0)
            cout << sum << " is even.\n";
        else
            cout << sum << " is odd.\n";
            result = sum;
            cout << num1 <<" " << op <<" " << num2 <<" " << op <<" " << num3 <<" " << op <<" " << num4 <<" " << op <<" " << num5 <<" = " << result;}
}