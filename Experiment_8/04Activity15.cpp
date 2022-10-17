#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int num1;
    int num2;
    int fnd = 0, a = 0;
        cout << "\n\n Find prime number within a range:\n";
	    cout << "--------------------------------------\n";
	    cout << " Input number for starting range: ";
	        cin >> num1;
	    cout << " Input number for ending range: ";
	        cin >> num2;		
	    cout << "\n The prime numbers between " << num1 << " and " << num2 << " are:" << endl;
    int i = num1;
        do{
           for(int j = 2;j <= sqrt (i); j++){
                if(i % j == 0)a++;}
                if(a == 0 && i != 1){ 
                    fnd++;
                    cout << i << " ";}
        a = 0;
        i++;}
        while(i <= num2);
    cout << "\n\n The total number of prime numbers between " << num1 << " to " << num2 <<" is: " << fnd << endl;
return 1;}