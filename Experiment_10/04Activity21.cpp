#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int even[10];
    int odd[10];
    int evncnt=0;
    int oddcnt=0;
    int i;
        cout << "Input numbers in the array";
    for(i = 0; i < 10; i++)
        cin >> arr[i];
    for(i = 0; i < 10; i++){
            if(arr[i] % 2 == 0)
                even[evncnt++] = arr[i];
            else
                odd[oddcnt++] = arr[i];
                }
            cout << "The even numbers are: ";
    for(i = 0; i < evncnt; i++)
        cout << even[i] << " ";
        cout << "\nThe odd numbers are: ";
    for(i = 0; i < oddcnt; i++)
        cout << odd[i] << " ";
}