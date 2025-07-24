#include<iostream>
#include<vector>
using namespace std;

class Stack{

    public:
    vector<int>v;

    void push(int d){
        v.push_back(d);
    }

    void pop(){
        if(v.empty()){
            cout<<"Already empty! can't pop"<<" ";
            return ;
        }
        v.pop_back();

    }

    int top()
    {
        if(v.empty()){
            cout<<"Vector is already empty";
            return -1;
        }
        return v.back();
    }

    bool empty()
    {
        return v.empty();
    }

    int size()
    {
        return v.size();
    }

};

int main()
{
    Stack s1;
    s1.push(5);
    s1.push(2);
    s1.push(7);

    cout<<s1.top()<<"";
    s1.pop();
    cout<<endl;
    cout<<s1.top()<<"";
    return 0;
}