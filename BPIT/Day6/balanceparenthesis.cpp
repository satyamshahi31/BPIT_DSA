#include<iostream>
using namespace std;


void vp(char *a , int i ,int open , int closed , int n){
    if( i == 2* n){
        a[i] ='\0';
        cout<<a<<endl;
        return ;
    }
    if(open > closed){
        a[i] = ')';

        vp(a , i+1 , open , closed+1 , n);
    }
    if(open < n){
        a[i] = '(';
        vp(a , i+1 , open+1 , closed , n);
    }
}
int main()
{
    int n ;
    cin>>n;
    char a[100];
    vp(a, 0 , 0 , 0 , n);
    return 0;
}