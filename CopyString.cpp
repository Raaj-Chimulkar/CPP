#include<iostream>
using namespace std;

//function for copying the string
void StrCpy(char dest[], char src[])
{
    int i=0;
    for(i=0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

int main()
{
    char src[10];
    char dest[10];

    cout<<"Enter the source string:";
    cin>>src;

    StrCpy(dest,src);

    cout<<src<<endl;

    cout<<dest<<endl;

    return 0;
}