//  Given a positive integer N, find all factors of N.

#include<iostream>
using namespace std;

void findFactors(int num){
    for(int i=1;i<=num/2;i++){
        if(num%i == 0){
            cout<<i<<" ";
        }
    }
    cout<<num;
    return;
}

int main(){
    int num;
    cout<<"Please enter a number to find its factors: "<<endl;
    cin>>num;
    cout<<"Factors of the number are: ";
    findFactors(num);
    // for(int i=2;i<=num/2;i++){
    //     if(num%i == 0){
    //         cout<<i<<" ";
    //     }
    // }
    return 0;
}