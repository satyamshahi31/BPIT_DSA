#include<iostream>
using namespace std;
#include<queue>

int main()
{
    queue<int>q;

    q.push(5);
    q.push(6);
    q.push(15);
    q.push(45);

    cout<<q.front()<<" "<<q.back()<<endl;

    q.pop();
    q.pop();

    cout<<q.front()<<" "<<q.back()<<endl;

}