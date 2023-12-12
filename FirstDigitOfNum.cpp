// Find the first digit in a positive integer.

#include<iostream>
using namespace std;

void findDigit(int num){
    int i;
    while(num!=0){
        i=num;
        num/=10;
    }
    cout<<"The number is: "<<i;
}

int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    findDigit(num);
    return 0;
}