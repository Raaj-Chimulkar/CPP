//Given a number, check if its prime or not. Return true if its prime else return false.

#include<iostream>
using namespace std;

bool isprime(int a)                             //function def for checking if number is prime
{
    for(int i=2;i<a;i++)                        
    {
        if(a%i==0)
        {   cout<<"Number is not prime!!"<<endl;
            return false;
        }
        else
        {
        cout<<"Entered number is prime"<<endl;
        return true;
        }
    }
}

int main()
{
    int num;
    cout<<"Enter the number ::"<<endl;          //insert the number for checking if prime or not
    cin>>num;

    cout<<isprime(num)<<endl;                   //calling function by passing the user entered number
}