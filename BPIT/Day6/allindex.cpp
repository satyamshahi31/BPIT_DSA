#include<iostream>
using namespace std;

void printall7 (int*a , int n , int i){
    if(i == n){
        return;
    }
    if(a[i] == 7){
        cout<<i<<" ";
    }`

    printall7(a , n , i+1);
}

int main()
{
    int a[]={7,1,2,3,7,4,5,7};
    int n = sizeof(a)/sizeof(int);

    printall7(a , n ,0);
    return 0;
}