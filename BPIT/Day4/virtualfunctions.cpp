#include<iostream>
using namespace std;

clase base{
    public:
    void func()
    {
        cout<<"base class function called"<<endl;
    }

};

class derived : public base{
     public:
    void func() //override
    {
        cout<<"derived class function called"<<endl;
    }
};
int main()
{
    base *b1;
    derived d1;
    b1 = &d1;
    b1->func();
    return 0;
}