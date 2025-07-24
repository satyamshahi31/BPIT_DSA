#include<iostream>
using namespace std;
#include<stack>

string reverse_string(string s){
    stack<int>st;
    for(char c : s){
       st.push(c);
    }

    string reversed ="";
    while(!st.empty()){
        reversed += st.top();
        st.pop();
    }
    return reversed;

}

int main()
{
    string s="satyam kumar";
    cout<<reverse_string(s)<<" ";
   return 0;

}