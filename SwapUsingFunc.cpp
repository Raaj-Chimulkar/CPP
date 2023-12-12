/*Assignment:
Implement swap function to swap two values.
Overload the function for various types.
Implement function using reference.-*/
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
    cout << "For int....." << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b;
}

void swap(double &a, double &b)
{
    double temp;

    temp = a;
    a = b;
    b = temp;
    cout << "For float....." << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b;
}

int main()
{
    int num1, num2;
    double no1, no2;

    // accepting values for integer
    cout << "Enter Number 1:: " << endl;
    cin >> num1;
    cout << "Enter Number 2:: " << endl;
    cin >> num2;

    // accepting values for double
    cout << "Enter Double Number 1:: " << endl;
    cin >> no1;
    cout << "Enter Double Number 2:: " << endl;
    cin >> no2;
    // calling swap function for integer
    swap(num1, num2);
    // calling swap function for integer
    swap(no1, no2);

    return 0;
}
