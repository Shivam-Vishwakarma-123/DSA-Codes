#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverseusingstack(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        int temp = q.front();
        s.push(temp);
        q.pop();
    }
    while (!s.empty())
    {
        int temp = s.top();
        q.push(temp);
        s.pop();
    }
}
void reverse(queue<int> &q)
{
    // base case
    if (q.empty())
    {

        return;
    }
    //   one case
    int temp = q.front();
    q.pop();
    reverse(q);
    q.push(temp);
}
void print(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << "  ";
        q.pop();
    }
    cout << endl;
}
void reverseKelement(queue<int> &q, int k)
{
    stack<int> s;
    int count = 0;
    int n = q.size();
    // k element ko stack me daalo
    if (k <= 0 || k > n)
        return;
    while (!q.empty())
    {
        int temp = q.front();
        s.push(temp);
        q.pop();
        count++;
        if (count == k)
        {
            count = 0;
            break;
        }
    }
    // kelement ko push karna q me
    while (!s.empty())
    {
        int temp = s.top();
        q.push(temp);
        s.pop();
    }
    count = 0;
    // n-k element ko pop karke push karna
    while (!q.empty() && n - k != 0)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;
        if (count == n - k)
        {

            break;
        }
    }
}
void interleaving(queue<int> &q)
{
    queue<int> q2;
    int n = q.size();
    int k = n / 2;
    int count = 0;
    if (n <= 1)
    {
        return;
    }

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;
        if (count == k)
        {
            break;
        }
    }
    while (!q.empty() && !q2.empty())
    {
        int first = q2.front();
        q2.pop();
        q.push(first);
        int second = q.front();
        q.pop();
        q.push(second);
    }
    if (n & 1)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    // q.push(90);
    print(q);

 interleaving(q);
    print(q);

    return 0;
}