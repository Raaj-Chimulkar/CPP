#include<iostream>
using namespace std;

//compare two strings 
bool StrCmp(char s1[], char s2[])
{
    int i=0;
    for(i=0; s1[i] != '\0'; i++)
    {
        if(s1[i] == s2[i]) //comparing each char of string
            continue;
        else
            return 0;
    }
    return 1;
}

int main()
{
    char str1[50];
    char str2[50];

    cout<<"Enter first input string:";
    cin>>str1;

    cout<<"Enter second input string:";
    cin>>str2;

    if(StrCmp(str1,str2) == 1)
        cout<<"Equal";
    else    
        cout<<"Not Equal";

    return 0;
}