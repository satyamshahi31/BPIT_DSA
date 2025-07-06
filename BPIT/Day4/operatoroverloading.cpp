#include<iostream>
using namespace std;

class complex{
public:
int real;
int imag;

complex operator+ (complex c){
    complex ans;
    ans.real = real + c.real;
    ans.imag = imag + c.imag;

    return ans;
}


};

int main()
{
    complex c1; //3+5i
    c1.real = 3 ;
    c1.imag = 5;

    complex c2;  //5+6i
    c2.real = 5;
    c2.imag = 6;

    complex c3;
    c3 = c1+c2;

    cout<<c3.real<<" "<<c3.imag<<" "<<endl;

    return 0;

}