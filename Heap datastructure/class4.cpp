#include <iostream>
#include <queue>
using namespace std;
int signum(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    if (a > b)
    {
        return 1;
    }
    if (a < b)
    {
        return -1;
    }
}

void callmedian(double &median, priority_queue<int> &maxheap, priority_queue<int, vector<int>, greater<int>> &minheap, int element)
{

    switch (signum(minheap.size(), maxheap.size()))
    {
    case 0:
        if (element > median)
        {
            // minheap me push karna
            minheap.push(element);
            median = minheap.top();
        }
        else
        {
            // max me push karo
            maxheap.push(element);
            median = maxheap.top();
        }

        break;
    case 1:
        // maxheap size<minheap
        if (element > median)
        {
            int mintop = minheap.top();
            minheap.pop();
            maxheap.push(mintop);
            minheap.push(element);
            // ab dono ke size barabar
            median = (minheap.top() + maxheap.top()) / 2.0;
        }
        else
        {
            maxheap.push(element);
            // ab dono ke size barabar
            median = (minheap.top() + maxheap.top()) / 2.0;
        }
        break;
    case -1:
        if (element > median)
        {
            // minheap me push karna
            //  size barabar even case
            minheap.push(element);
            median = (minheap.top() + maxheap.top()) / 2.0;
        }
        else
        {
            int top = maxheap.top();
            // max se pop karo aur min me daalo
            maxheap.pop();
            minheap.push(top);
            maxheap.push(element);
            // ab dono ke size barabar
            median = (minheap.top() + maxheap.top()) / 2.0;
        }

    default:
        break;
    }
}
int main()
{
    int arr[] = {5, 7, 2, 9, 3, 8};
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;

    int n = 6;
    double median = 0;
    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        callmedian(median, maxheap, minheap, element);
        cout << "->" << median << endl;
    }
    return 0;
}