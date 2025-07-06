#include<iostream>
using namespace std;

class base{
    public:
     virtual void func() = 0;
    // {
    //     cout<<"base class function called"<<endl;
    // }

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
    base b1;
    return 0;
}