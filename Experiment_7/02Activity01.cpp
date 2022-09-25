#include <iostream>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main(){
    cout << "Enter 10 Numbers"  << endl;
    int a,b = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
            if(b < a){
                b = a;}}
        cout << "The Largest Number Is:" << b << endl;        
return 0; 
}