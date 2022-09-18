#include <iostream>
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
    float Item_1, Item_2, Item_3, Item_4, Item_5;
        cout << "Enter Price for Item_1: ";
            cin >> Item_1;
        cout << "Enter Price for Item_2: ";
            cin >> Item_2;
        cout << "Enter Price for Item_3: ";
            cin >> Item_3;
        cout << "Enter Price for Item_4: ";
            cin >> Item_4;
        cout << "Enter Price for Item_5: ";
            cin >> Item_5;
        cout << " \n";

    float Price = Item_1 + Item_2 + Item_3 + Item_4 + Item_5;
        cout << "Your Total Price is: " << Price;
        cout << "\n";
        if (Price >= 10000){
            cout << "Your Discounted Price is: " << Price * 0.80;}
        else if (Price >= 5000 && Price <= 9999){
            cout << "Your Discounted Price is: " << Price * 0.85;}
        else if (Price >= 5000 && Price <= 9999){
            cout << "Your Discounted Price is: " << Price * 0.90;}
        else if (Price > 999){
        cout << "Your Price is not Eligible for Discount";}
        
    return 0;
}