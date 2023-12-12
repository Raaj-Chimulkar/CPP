// 13. Given a positive integer N, print the digits in the number as words.

#include<iostream>
using namespace std;

int reverseNum(int num){
    int temp=0;
    while (num>0)
    {
        int remainder=num%10;
        temp=(temp*10) + remainder;
        num/=10;
    }
    return temp;
    
}

void printWords(int num){
    string arrWords[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int rev=reverseNum(num);
    while (rev>0)
    {
        int digit=rev%10;
        cout<<arrWords[digit]<<" ";
        rev/=10;
    }
}

int main(){
    int num;
    cout<<"Enter a number and lets find its digits in word:"<<endl;
    cin>>num;
    cout<<"The "<<num<<" in words is:"<<endl;
    printWords(num);
    return 0;
}