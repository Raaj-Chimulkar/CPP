// Find prime numbers between two positive integers N and M, including N and M.

#include<iostream>
using namespace std;

void checkPrime(int num){
    bool prim=true;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            prim=false;
            break;
        }
    }
    if(prim){
        cout<<num<<" ";
    }

}

int main(){
    int n,m,num;
    cout<<"Enter two numbers: "<<endl;
    cin>>n>>m;
    for(num=n;num<=m;num++){
        checkPrime(num);
    }

    return 0;
}