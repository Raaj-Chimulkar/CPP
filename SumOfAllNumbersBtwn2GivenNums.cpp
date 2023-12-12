// Find sum of all numbers between two positive integers N and M, including N and M.

#include<iostream>
using namespace std;

void sumNumb(int n1, int n2){
    int sum=0;
    while (n1<=n2){
        sum = sum + n1;
        n1++;
    }
    cout<<sum;
}

int main(){
    int num1,num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    sumNumb(num1, num2);
    return 0;
}