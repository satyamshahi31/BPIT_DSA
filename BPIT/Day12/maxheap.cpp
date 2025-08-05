#include<iostream>
using namespace std;

#include<queue>

int main()
{
    priority_queue<int , vector<int>,greater<int>>pq;
    pq.push(5);
    pq.push(8);
    pq.push(7);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    return 0;
}