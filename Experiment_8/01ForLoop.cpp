#include <iostream>
using namespace std;
int main(){
    int Value;
        cout << "Enter a positive number: ";
            cin >> Value;
    while(Value>=0){
        cout << Value << " - ";
        Value--;}
            cout << "Done! \n\n\n";
    return 0;
}