
/*
In BigInt class overload following operators:
   Binary operators + - * / to work with
   - both operands of type BigInt
   - one BigInt operand and one int
   Unary operators ++ and -- in both pre and post form.
   Also write a small program to demonstrate the use of BigInt class and overloaded operators.
*/

#include <iostream>

using namespace std;
class BigInt
{
    int num;

public:
    void get()
    {
        cout << num << endl;
    }
    BigInt()
    {
        num = 0;
        // cout << "parameter less constructor" << endl;
    }
    BigInt(int num)
    {
        this->num = num;
        // cout << "parameterized constructor" << endl;
    }

    // overload + operator
    BigInt operator+(BigInt obj)
    {
        BigInt result;
        result.num = this->num + obj.num;
        return result;
    }
    //  overload + int operator
    BigInt operator+(int value)
    {
        BigInt result;
        result.num = this->num + value;
        return result;
    }

    // overload - operator
    BigInt operator-(BigInt obj)
    {
        BigInt result;
        result.num = this->num - obj.num;
        return result;
    }

    // overload - int operator
    BigInt operator-(int value)
    {
        BigInt result;
        result.num = this->num - value;
        return result;
    }

    // overload  / operator
    BigInt operator/(BigInt obj)
    {
        BigInt result;
        result.num = this->num / obj.num;
        return result;
    }

    // overload / int operator
    BigInt operator/(int value)
    {
        BigInt result;
        result.num = this->num / value;
        return result;
    }

    // overload  * operator
    BigInt operator*(BigInt obj)
    {
        BigInt result;
        result.num = this->num * obj.num;
        return result;
    }

    // overload * int operator
    BigInt operator*(int value)
    {
        BigInt result;
        result.num = this->num * value;
        return result;
    }

    // Overload ++ prefix operator
    BigInt operator++()
    {
        BigInt result;
        result.num = ++this->num;
        return result;
    }

    // Overload ++ postfix operator
    BigInt operator++(int)
    {
        BigInt result;
        result.num = this->num++;
        return result;
    }

    // Overload -- prefix operator
    BigInt operator--()
    {
        BigInt result;
        result.num = --this->num;
        return result;
    }

    // Overload -- postfix operator
    BigInt operator--(int)
    {
        BigInt result;
        result.num = this->num--;
        return result;
    }
};

int main()
{
    BigInt bigA(5), bigB(6), bigC;
    int a = 3;

    // addition +
    BigInt sum = bigA + a; // with int
    cout << "addition bigA(5) + 3 :";
    sum.get();
    cout<<endl;

    BigInt bigsum1 = bigA + bigB; // with object
    cout << "addition bigA(5) + bigB(6) :";
    bigsum1.get();
    cout<<endl;

    // substraction -
    BigInt sub = bigA - a; // with int
    cout << "substraction bigA(5) - 3 :";
    sub.get();
    cout<<endl;

    BigInt bigsub1 = bigA - bigB; // with object
    cout << "substraction bigA(5) - bigB(6) :";
    bigsub1.get();
    cout<<endl;

    // multiplication *
    BigInt mul = bigA * a; // with int
    cout << "multiplicastion bigA(5) * 3 :";
    mul.get();
    cout<<endl;

    BigInt bigmul1 = bigA * bigB; // with object
    cout << "substraction bigA(5) * bigB(6) :";
    bigmul1.get();
    cout<<endl;

    // division /
    BigInt div = bigA / a; // with int
    cout << "division bigA(5) / 3 :";
    div.get();
    cout<<endl;

    BigInt div1 = bigA / bigB; // with int
    cout << "substraction bigA(5) / bigB(6) :";
    div1.get();
    

    cout<<endl<<endl;
    cout<<"Before preincrement bigC = ++bigA;  "<<endl;
    cout<<"bigC : ";
    bigC.get();
    cout<<"bigA : ";
    bigA.get();
    bigC = ++bigA;
    cout<<"After preincrement bigC = ++bigA  "<<endl;
    cout<<"bigC : ";
    bigC.get();
    cout<<"bigA : ";
    bigA.get();

    cout<<"Before postincrement bigC = bigA++ "<<endl;
    cout<<"bigC : ";
    bigC.get();
    cout<<"bigA : ";
    bigA.get();
    bigC = bigA++;
    cout<<"After postincrement bigC = bigA++ "<<endl;
    cout<<"bigC : ";
    bigC.get();
    cout<<"bigA : ";
    bigA.get();

    cout<<"Before predecrement bigC = --bigA "<<endl;
    cout<<"bigC : ";
    bigC.get();
    cout<<"bigA : ";
    bigA.get();
    bigC = --bigA;
    cout<<"After predecrement bigC = --bigA "<<endl;
    cout<<"bigC : ";
    bigC.get();
    cout<<"bigA : ";
    bigA.get();

    cout<<"Before postdecrement bigC = bigA-- "<<endl;
    cout<<"bigC : ";
    bigC.get();
    cout<<"bigA : ";
    bigA.get();
    bigC = bigA--;
    cout<<"After postdecrement bigC = bigA-- "<<endl;
    cout<<"bigC : ";
    bigC.get();
    cout<<"bigA : ";
    bigA.get();

    return 0;
}
