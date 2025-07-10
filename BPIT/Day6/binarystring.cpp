#include<iostream>
using namespace std;

int binarystring(int n , int ld){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        if(ld == 0){
            return 2;
        }
        else{
            return 1;
        }
    }

    if(ld ==0){
        return binarystring(n-1 , 0)+ binarystring(n-1,1);
    }
    else{
        return binarystring(n-1, 0);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<binarystring(n , 0);

    return 0;
}