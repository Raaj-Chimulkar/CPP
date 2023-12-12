// 12. Find the count of a digit in a given positive integer.

#include<iostream>
using namespace std;

int findDigit(int num, int digit){
    int count=0;
    while (num>0)
    {
        if (num%10==digit)
        {
            count++;
        }
        num/=10;
    }
    return count;
    
}

int main(){
    int num,digit;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"Now enter what digit to find in the number?"<<endl;
    cin>>digit;
    int repeatCount=findDigit(num,digit);
    cout<<"The number of times "<<digit<<"was repeated in"<<num<<" are "<<repeatCount<<endl;
    return 0;
}