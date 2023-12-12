// Given a positive integer N, check if it is an armstrong number or not.
// An armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.

#include<iostream>
using namespace std;

int power(int num,int exponent){
    int power=1;
    while(exponent>0){
        power=power*num;
        exponent--;
    }
    return power;
}

int findDigit(int num){
    int counter=0;
    while(num>0){
        num/=10;
        counter++;
    }
    return counter;
}

int main(){
    int num,exponent,digits,counter=0,sum=0,base;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    digits=findDigit(num);
    cout<<"number of digits: "<<digits<<endl;


    exponent=digits;

    int i=num;
    while(digits>0){
        base=i%10;
        sum=sum+power(base,exponent);
        digits--;
        i/=10;
    }
    cout<<sum<<endl;

    
    if(sum==num){
        cout<<"It is an armstrong number"<<endl;
    }
    else{
        cout<<"It is not an armstrong number"<<endl;
    }
    return 0;
    
}