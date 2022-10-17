#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main(){
srand((unsigned)time(0));
int random_integer = rand();
cout << random_integer << endl;
return 0;}