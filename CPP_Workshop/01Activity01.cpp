#include <iostream>
#include <string>
#define GROUP_1_THRESHOLD 12
#define GROUP_2_THRESHOLD 28
#define GROUP_1_NAME "Group A"
#define GROUP_2_NAME "Group B"
#define GROUP_3_NAME "Group C"
using namespace std;

string GetGroup(int age);

int main()
{
    string name = "";
    int age = 0;
    string group = "";
        cout << "Please enter your name: ";
    getline(cin, name);
        cout << "And please enter your age: ";
            cin >> age;
    group = GetGroup(age);
        cout << "Welcome "<< name << ". You are in " << group << ".\n";
}
    string GetGroup(int age)
{
    if (age <= GROUP_1_THRESHOLD)
    {
        return GROUP_1_NAME;
    }
    else if (age <= GROUP_2_THRESHOLD)
    {
        return GROUP_2_NAME;
    }
    else
    {
        return GROUP_3_NAME;
    }
}