#include<iostream>
using namespace std;

int main()
{

    int a;
    cin>>a;
    cin.ignore();
    char c[100];
    cin.getline(c,100);

    cout<<c;
    return 0;
}