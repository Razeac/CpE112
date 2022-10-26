#include <iostream>
using namespace std;

int main() {  
    int a, b;
    cin >> a, b;
	int arr[5][5] = {
		{ 10, 11, 15, 19, 35 },
		{ 20, 21, 25, 29, 34 },
		{ 35, 39, 44, 48, 50 },
		{ 45, 49, 50, 54, 60 },
        { 12, 13, 14, 16, 17 }};
	int i, j;
	    cout << "Printing a 2D Array:\n";
	for(i=0; i<a; i++){
		for(j=0; j<b; j++) {cout << "\t" << arr[i][j];}
		cout << endl;}}