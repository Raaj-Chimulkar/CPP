// Given a positive integer N, check if it is a perfect number or not.
// Perfect number is a positive integer that is equal to the sum of its factors (excluding the number itself).

#include<iostream>
using namespace std;

int addFactors(int num){
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i == 0){
            sum = sum + i;
        }
    }
    return sum;
}

int main(){
    int num,sum;
    cout<<"Please enter a number to find if its a perfect number: "<<endl;
    cin>>num;
    cout<<"Sum of factors of the number is: ";
    sum=addFactors(num);
    cout<<sum<<endl;

    if(sum==num){
        cout<<"Therefore it is a perfect number";
    }
    else{
        cout<<"Therefore it is not a perfect number";
    }
    return 0;
}