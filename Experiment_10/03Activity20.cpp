#include<iostream>
#include<string>
using namespace std;
void reverseChar(char* str);
char str[50],rstr[50];
int i,n;
int main()
{
        cout << "Please Enter the String: ";
            cin.getline(str,10);
    reverseChar(str);
        cout << str;
    return 0;
}
void reverseChar(char* str)
{
    for(i=0;i<sizeof(str)/2;i++)
    {
        char temp=str[i];
        str[i]=str[sizeof(str)-i-1];
        str[sizeof(str)-i-1]=temp;
    }
}