#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(20);
    pq.push(15);

    cout<<pq.top();
    pq.pop();
    cout<<endl;
    cout<<pq.top();

    return 0;
}