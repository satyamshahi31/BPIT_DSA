#include<iostream>
#include<stack>
using namespace std;


void printstack(stack<int>st)
{
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

}

int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    printstack(st);



    return 0;
}