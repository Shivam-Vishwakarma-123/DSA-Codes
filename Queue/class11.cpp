#include <iostream>
using namespace std;
class queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    queue(int size)
    {
        this->size = size;
        this->front = 0;
        this->rear = 0;
        arr = new int[size];
    }
    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    void pop()
    {
        if (front == rear)
        {
            cout << " Queue is Empty " << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    int getfront()
    {
        if (front == rear)
        {
            cout << "Q is empty " << endl;
        }
        else
        {
            return arr[front];
        }
    }
    bool isempty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getsize()
    {
        return rear - front;
    }
};
int main()
{
    queue q(5);
    cout << q.isempty() << endl;
    q.push(10);
    q.push(15);
    cout << q.getsize() << endl;
    q.push(12);
    cout << q.getsize() << endl;
    q.push(32);
    cout << q.getsize() << endl;
    q.push(32);
    cout << q.getsize() << endl;
    q.push(32);
    cout << q.getsize() << endl;
    cout << q.isempty() << endl;
    q.pop();
    q.pop();
    cout << q.getsize() << endl;
    q.pop();
    cout << q.getsize() << endl;
    q.pop();
    cout << q.getsize() << endl;
    q.pop();
    cout << q.getsize() << endl;
    q.pop();
    return 0;
}