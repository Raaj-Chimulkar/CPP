#include<iostream>
using namespace std;

// calculates the length of the string
int strlen(const string str)
{
    int len=0;
    for(int i=0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;    
}

int main()
{
    string str; // string declaration

    //taking input from user
    cout<<"Enter the string to find length:";
    cin>>str;

    cout<<"The length of "<<str<<" is "<< strlen(str);

    return 0;
}