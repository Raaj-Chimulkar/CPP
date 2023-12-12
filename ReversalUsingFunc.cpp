#include<iostream> 
using namespace std;


int getReverse(int num, int rev){
    if(num == 0)
        return rev;
    
    int rem = num % 10;
    rev = rev * 10 + rem;
    
    return getReverse(num / 10, rev);
}

//main program
int main ()
{
    int num, reverse = 0;
    cout <<"\nThe number is: "<<num; 
    
    
    // palindrome if num and reverse are equal
    if (getReverse(num, reverse) == num)
        cout << num << " is Palindrome";
    else
        cout << num << " is not a Palindrome";

}