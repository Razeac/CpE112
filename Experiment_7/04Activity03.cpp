#include <iostream>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main(){
    int i, x;
    int even=0;
    int odd=0;
        cout << "Enter Random Numbers" << endl;
        cout << "This Will Count How Many Even And Odd Numbers" << endl;
        for(i = 1; i < 11 ; i++){
            cin >> x;
                if(x % 2 ==0)
                    even++;
                if(x % 2 !=0)
                    odd++;}
            cout << "The Total Numbers of Even Number is " << even << endl;
            cout << "The Total Numbers of Odd Number is " << odd << endl;
return 0; 
}