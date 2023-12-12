// Given a positive integer N, check if its palindrome or not. A palindrome number is a number that is same as its reverse.

#include<iostream>
using namespace std;

int reverseNum(int num){
    int i=num,reversed=0,remainder;

    while(i!=0){

        remainder=i % 10;
        reversed = reversed * 10 + remainder;
        i/=10;
    }
    return reversed;
}

int main()
{
    int num,reversed;
    cout<<"Lets check if number is palindrome"<<endl<<"Enter a number :"<<endl;
    cin>>num;
    reversed=reverseNum(num);

    if(num == reversed){
        cout<<num<<" is a Palindrome as itts reverse is also: "<<endl;
    }
    else{
        cout<<num<<" is not a Palindrome as its reverse is: "<<endl;
    }

    cout<<reversed;
    

    return 0;
}