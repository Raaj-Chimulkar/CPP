// Given a positive integer N, find its reverse.
#include<iostream>
using namespace std;

int reverseInt(int num){
    int reversed=0;
    while(num!=0){
        reversed = reversed*10 + num%10;
        num/=10;
    }
    cout<<reversed;
}

int main(){
    int num;
    cout<<"Lets reverse a number \nEnter a Number :"<<endl;
    cin>>num;
    cout<<"The reversed number is: "<<endl;
    reverseInt(num);
    return 0;
}