#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(5);
    q.push(8);
    q.push(7);

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    return 0;

}