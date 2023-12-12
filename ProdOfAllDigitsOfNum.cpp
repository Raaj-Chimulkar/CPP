// Find the product of all digit of a positive integer.

#include<iostream>
using namespace std;

int main(){
    int num,i,sum=1;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    while(num!=0){
        i=num%10;
        sum=sum*i;
        num/=10;
    }
    cout<<"The sum of all digits is: "<<sum;

    return 0;
}