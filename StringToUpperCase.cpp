#include<iostream>
using namespace std;

void convertToLowercase(char str[])
{
    for(int i=0; str[i] != '\0'; i++)
    {
        str[i] -= 32;
    }
}

int main()
{
    char str[10];

    cout<<"Enter the string in lowercase :";
    cin>>str;

    cout<<str<<endl;

    convertToLowercase(str);

    cout<<"After ConvertToUpperCase:\n"<<str<<endl;

    return 0;
}