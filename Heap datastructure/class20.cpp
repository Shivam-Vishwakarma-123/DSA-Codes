#include<iostream>
#include<queue>
using namespace std;
int main ()

{
    // ++++++++++++++++++++MAx heap+++++++++++++++++++++
//     priority_queue<int>pq;
// pq.push(10);
// pq.push(20);
// pq.push(30);
// pq.push(40);
// pq.push(50);
// cout<<pq.top()<<endl;
// pq.pop();
// cout<<pq.top()<<endl;
// pq.pop();
// cout<<pq.top()<<endl;
// pq.pop();
// cout<<pq.top()<<endl;
// pq.pop();
// cout<<pq.top()<<endl;
// pq.pop();
// cout<<pq.empty();
// ++++++++++++++Min heap+++++++++++++++++++
priority_queue<int,vector<int>,greater<int>>pq;
pq.push(30);
pq.push(50);
pq.push(20);
pq.push(40);
pq.push(10);
cout<<pq.top()<<endl;
pq.pop();
cout<<pq.top()<<endl;
pq.pop();
cout<<pq.top()<<endl;
pq.pop();
cout<<pq.top()<<endl;
pq.pop();
cout<<pq.top()<<endl;
pq.pop();
cout<<pq.empty();

 return 0;
}