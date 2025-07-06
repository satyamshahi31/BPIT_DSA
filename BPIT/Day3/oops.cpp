#include<iostream>
using namespace std;

class rectangle{
    public:
     int len;
     int bre;

    rectangle()
    {
        cout<<"default constructor called"<<endl;
    }

    rectangle(int a , int b){
        len = a;
        bre = b;
        cout<<"parameterised constructor called"<<endl;
    }

    rectangle(rectangle &obj){
        len=obj.len;
        bre= obj.bre;
        cout<<"Copy constructor called";
    }
};

int main()
{
    rectangle r1,r2;
    // rectangle r3(10,20);
    // rectangle r4;
    // rectangle r5(r4);
    // r1.len = 10;
    // r1.bre = 20;
    return 0;
}