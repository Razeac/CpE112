#include <iostream>
using namespace std;

int main()
{
    float physics, chemistry, biology, math, computer;

        cout << "Enter Grade for Physics: ";
            cin >> physics;
        cout << "Enter Grade for Chemistry: ";
            cin >> chemistry;
        cout << "Enter Grade for Biology: ";
            cin >> biology;
        cout << "Enter Grade for Math: ";
            cin >> math;
        cout << "Enter Grade for Computer: ";
            cin >> computer;
        cout << " \n";
    float  grade = physics + chemistry + biology + math + computer;
    float average = grade / 5;
        cout << "Your Total Average is: " << average;
        cout << "\n";
        if (average >= 90){
            cout << "Your Rating is Grade A \n";}
        if (average >= 80 && average <= 89){
            cout << "Your Rating is Grade B \n";}
        if (average >= 70 && average <= 79){
            cout << "Your Rating is Grade C \n";}
        if (average >= 60 && average <= 69){
            cout << "Your Rating is Grade D \n";}
        if (average >= 50 && average <= 59){
            cout << "Your Rating is Grade E \n";}
        if (average <= 49){
            cout << "Your Rating is Grade F \n";}
    return 0;
}