#include <iostream>
#define PI 3.1415926535
using namespace std;
//Created by Mendez, Kenneth Carl Ceazar F.
int main()
{
	int radius,height;
	float volume;
		cout << "\n\n Calculate the volume of a cylinder: \n";
		cout << "-----------------------------------------\n";		
        cout<<" Input the radius of the cylinder: ";
        	cin>>radius;
		cout<<" Input the height of the cylinder: ";
        	cin>>height;
    	volume=(PI*radius*radius*height);
        cout<<" The volume of a cylinder is: "<< volume << endl;
        cout << endl;
    return 0;
}