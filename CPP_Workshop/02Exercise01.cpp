#include <iostream>
#include <string>
#define GRADE_C_THRESHOLD 25
#define GRADE_B_THRESHOLD 50
#define GRADE_A_THRESHOLD 75
using namespace std;

int main() 
{
    int value = 0;
        cout << "Please enter test score (0 - 100): ";
            cin >> value;
    if (value < GRADE_C_THRESHOLD){
        cout << "Fail";} 
    else if (value < GRADE_B_THRESHOLD){
        cout << "Pass: Grade C";} 
    else if (value < GRADE_A_THRESHOLD) {
        cout << "Pass: Grade B";} 
    else {
        cout << "Pass: Grade A";}