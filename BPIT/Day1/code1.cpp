#include<iostream>
using namespace std;

class parent{
public:
 virtual void show()
{
    cout<<"parent";
}
};
class child : public parent{
public:
 void show()
{
    cout<<"child";
}
};
int main()
{
    child *p1; //base class pointer
    parent c2; //derived class object
    p1 = & c2;
    p1->show();
    
}

