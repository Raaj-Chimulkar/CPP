// 14. Given a positive integer N, print the number in words.

#include<iostream>
using namespace std;

void convertNum(int num){
    string first_twenty[] = {
        "",        "One",       "Two",      "Three",
        "Four",    "Five",      "Six",      "Seven",
        "Eight",   "Nine",      "Ten",      "Eleven",
        "Twelve",  "Thirteen",  "Fourteen", "Fifteen",
        "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };
 
    string tens[]
        = { "", "",  "Twenty",  "Thirty", "Forty", "Fifty",
            "Sixty", "Seventy", "Eighty", "Ninety" };

    int crore,lakh,thousand,hundred,ten,unit;
    if (num>=10000000)
    {
        crore=num/10000000;
        if (crore>19)
        {
            ten=crore/10;
            crore%=10;
            cout<<tens[ten]<<" ";
        }
        if(unit>0){
        unit=crore;
        cout<<first_twenty[unit];
        }
        cout<<" Crore ";
    }
    num=num%10000000;
    if (num>=100000)
    {
        lakh=num/100000;
        if (lakh>19)
        {
            ten=lakh/10;
            lakh%=10;
            cout<<tens[ten]<<" ";
        }
        if(unit>0){
        unit=lakh;
        cout<<first_twenty[unit];
        }
        cout<<" Lakh ";
    }
    num=num%100000;
    if (num>=1000)
    {
        thousand=num/1000;
        if (thousand>19)
        {
            ten=thousand/10;
            thousand%=10;
            cout<<tens[ten]<<" ";
        }
        if(thousand>0){
        cout<<first_twenty[thousand];
        }
        cout<<" Thousand ";
    }
    num=num%1000;
    if (num>=100)
    {
        hundred=num/100;
        if (hundred>0)
        {
            cout<<first_twenty[hundred];
        }
        cout<<" Hundred ";
    }
    num=num%100;
    if (num>19)
    {
        ten=num/10;
        num%=10;
        cout<<tens[ten]<<" ";
    }
    if (num>0)
    {
        cout<<first_twenty[num]<<".";
    }
}

int main(){
    int num;
    cout<<"Enter a number to convert to words:"<<endl;
    cin>>num;
    cout<<"In words written as:"<<endl;
    convertNum(num);
    return 0;
}