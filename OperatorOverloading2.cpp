//  Binary operator + to work with one Date operand and one int
//
//    Binary operator - to work with both operands of type Date
//    - one Date operand and one int
//
//    Unary operators ++ and -- in both pre and post form.
//    Also write a small program to demonstrate the use of Date class and overloaded relational operators.

#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
   
    Date(int d=0, int m=0, int y=0)
    {
        this->day = d;
        this->month = m;
        this->year = y;
    }

    void read()
    {
        cout << "Enter the day: ";
        cin >> day;
        cout << "Enter the month: ";
        cin >> month;
        cout << "Enter the year: ";
        cin >> year;
    }

    void write()
    {
        cout << this->day << "-" << this->month << "-" << this->year << endl;
    }

    //Binary operator + to work with one Date operand and one int
    Date operator+(int days) 
    {
        Date res = *this; //to create a copy of the current object res and inititalize with current object
        res.day = res.day + days; 
        return res;
    }


    // Binary operator - to work with both operands of type Date
    Date operator-(Date& obj)
    {
        return (year-obj.year)*365 + (month-obj.month)*30 + (day - obj.day);
    }
    
    
    // Binary operator - to work with one Date operand and one int
    Date operator-(int days)
    {
        Date res2 = *this;
        res2.day = res2.day - days;
        return res2;
    }

    // Unary operators ++ for pre increment
    Date operator++()
    {
        ++day;
        return *this;
    }
    
    // Unary operators ++ for post increment
    Date operator++(int) //dummy operator to differentiate between pre and post increment
    {
        Date res3 = *this; //copy values of current instance of class to res3
        ++(*this);        // then increment the date
        return res3;
    }

    // Unary operators -- for pre decrement
    Date operator--()
    {
        --day;
        return *this;
    }

    // Unary operators -- for post decrement
    Date operator--(int)
    {
        Date res4 = (*this);
        --(*this);
        return res4;
    }

    // Overload relationnal operators 
    bool operator==(Date& obj)
    {
        if (this->day == obj.day && this->month == obj.month && this->year == obj.year)
            return true;
        else
            return false;
    }

    bool operator!=(Date& obj)
    {
        if(*this == obj)
            return false;
        else    
            return true;
    }

};

int main()
{
    // Date obj1(10, 02, 2001);

    Date obj1;
    obj1.read();
    cout<<endl << "Date you have entered is obj1: ";
    obj1.write();

    Date obj2;
    obj2 = obj1 + 1; 
    cout<<endl<<"obj2 is obj1+1: "; obj2.write();

    Date obj3;
    obj3 = obj1-1;  
    cout<<endl<<"obj3 is obj1-1: "; obj3.write();    

    Date ans = obj2 - obj1; //obj1.operator-(obj2)  
    cout<<endl<<"ans is obj2-obj1: "; ans.write();

    cout<<endl<<"obj1 is: "; obj1.write();
    cout<<endl<<"obj2 is: "; obj2.write();

    if (obj1 != obj2)
        cout<<endl << "Dates are not equal"<<endl;
    else
        cout<<endl << "Dates are equal"<<endl;
    
    cout<<endl;

    return 0;
}