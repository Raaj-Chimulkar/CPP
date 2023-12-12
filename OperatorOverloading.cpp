#include<iostream>
using namespace std;

class bigint
{
    int i;

    public:
    bigint(int a=0)
    {
        i=a;
    }

    bigint operator+(bigint &obj)
    {
        bigint result;
        cout<<"value of i: "<<i<<endl;
        cout<<"value of obj.i: "<<obj.i<<endl;
        result.i = this->i + obj.i;
        return result;
    }

    void print()
    {
        cout<<"addition: "<<i<<endl;
    }
};

int main()
{
    bigint obj1(101);
    bigint obj2(305);
    // bigint obj3(100);
    bigint res ; 

    res = obj1 + obj2;
    res.print();
    cout<<endl;



    return 0;
}