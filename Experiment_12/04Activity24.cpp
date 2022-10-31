#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void w(){
   int x = 0;
   string c, d, e;
   string f ="admin", g ="pass";

   r:
      cout << "Are you a CpE student yes or no?: ";
         cin >> c;
      if( c == "yes"){
   goto q;}
      else if( c == "no"){
         cout << "\nYou dont have authorized to log in here in our program.\n";}
      else{
         cout << "Invald Input! Please choose yes or no\n\n";
      system("pause");
      system("cls");
   goto r;}
    
   q:
      cout << "Username: ";
         cin >> d;
      cout << "Password: ";
         cin >> e;
      if((f == d ) && (g == e)){
         cout << "\nSuccesful login!\n\n";
         cout << "WELCOME STUDENT!!\n\n";}
      else{
      x++;
         cout << "\n\nInvalid username and password";}
      if(x==1){
         cout << "\nYou have 2 attempts left.\n\n";
   goto q;} 
      else if(x==2){
         cout << "\nYou have 1 attempts left.\n\n";
   goto q;}
      else if(x==3){
         cout << "\nYou have no remaining attempts left.\n\n";
   goto r;}
}

void x(int f[5][5]){
   int a,b,g = 5,h = 5,i = 0;
      cout << "\nSum of each row:\n";
   for (a = 0; a < 5; ++a){
      for (b = 0; b < h; ++b){
         i = i + f[a][b];
      }  
            cout << "Sum of row " 
            << (a + 1) << " = " 
            << i << endl;
         if ( i % 2 == 0)
            cout << i << " is even.\n";
         else
            cout << i << " is odd.\n"; 
      i = 0;
   }
}

void y(int f[5][5]){
   int a,b,g = 5,h = 5,i = 0;
      cout << "\nSum of each column:\n";
   for (b = 0; b < h; ++b){
      for (a = 0; a < g; ++a){
         i = i + f[b][a];
      }
            cout << "Sum of column " 
            << (a + 1) << " = " 
            << i << endl; 
         if ( i % 2 == 0)
            cout << i << " is even.\n";
         else
            cout << i << " is odd.\n"; 
      i = 0;
   }
}

int main()
{
   w();
   int a, b, c, f[5][5], d = 1, g = 5, h = 5;    
   cout << "Randomly Generated Table By Razeac:\n";
   srand(time(NULL));{
      for (a = 0; a < g; a++){
         for (b = 0; b < h; b++){
            c = rand() %25 + 1;
            f[a][b] = d++;
            f[a][b] = c;
            cout << "\t"<< f[a][b];
         }
            cout << "\n";
      }
   }
   x(f);
   y(f);
   return 0;
}