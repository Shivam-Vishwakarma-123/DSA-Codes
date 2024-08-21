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
    // same code
    void pushrear(int data)
    {
        if ((front == 0 && rear == size - 1) || rear == front - 1)
        {
            cout << " Queue is full" << endl;
            return;
        }
        // single element
        else if (front = -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = data;
        }
        // Circular flow
        else if (rear = size - 1 && front != 0)
        {
            rear = 0;
        }
        // normal flow
        else
        {
            rear++;
        }
        arr[rear] = data;
    }
    void pushfront(int data)
    {
        if ((front == 0 && rear == size - 1) || rear == front - 1)
        {
            cout << " Queue is full" << endl;
            return;
        }
        // single element
        else if (front = -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = data;
        }
        // Circular flow
        else if (front == 0 && rear != size - 1)
        {
            front=size-1;
        }
        // normal flow
        else
        {
            front--;
        }
        arr[front] = data;
    }
    void popfront()
    {
        if (front == -1)
        {
            cout << "Can't pop Queue is empty";
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    void poprear()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Can't pop Queue is empty";
            return;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
            rear--;
    }
};

int main()
{

    return 0;
}