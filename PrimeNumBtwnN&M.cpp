//Find prime numbers between two positive integers N and M, including N and M.

#include<iostream>
using namespace std;


void prime(int num1,int num2)                             //function def for checking if number is prime
{
    int flag=1;
    for(int i=num1;i<=num2;i++)                        
    {
       for(int j=2;j<=i/2;j++)
       {
        if(i%j==0)
        {
            flag=0;
        }
       }
       if(flag)
       {
        cout<<i<<" ";
       }
       flag=1;
    }
}

int main()
{
    int n1,n2;
    cout<<"Enter the 1st number ::"<<endl;          //insert the number for checking if prime or not
    cin>>n1;
    cout<<"Enter the 2nd number ::"<<endl;          //insert the number for checking if prime or not
    cin>>n2;
    cout<<"Prime numbers between "<<n1<<" and "<<n2<<" are ::";
    prime(n1,n2);                                    //calling function by passing the user entered number
    
}
