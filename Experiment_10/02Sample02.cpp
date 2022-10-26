#include <iostream>
using namespace std;
int main()
{
    int i, Num_elements , arr[100];
        cout << "Input the number of elements to store in the array : ";
            cin >> Num_elements;
        cout << "Input value of elements in the array.. \n";
for(i = 0; i < Num_elements; i++){
        cout << "element - " << i << " ";
            cin >> arr[i];}
    cout << " \n\n";
for(i = 0; i < Num_elements; i++){
    cout << arr[i] << " ";}
    cout << "\n\nThe values store into the array in reverse are :\n";
for(i = Num_elements - 1; i >= 0; i--){
    cout << arr[i] << " ";}
    cout << "\n\n ";
return 0;
}