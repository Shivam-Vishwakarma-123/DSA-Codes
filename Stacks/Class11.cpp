#include <iostream>
using namespace std;
class stack
{
    int top;
    int *arr;
    int size;

public:
    stack(int size)
    {
        arr = new int[size];
        this->top = -1;
        this->size = size;
    }
    void push(int data)
    {
        // Stack is full
        if (size - top == 1)
        {
            cout << "Stack Overflow " << endl;
        }
        if (size - top > 1)
        {
            arr[top + 1] = data;
            top++;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            arr[top] = 0;
            top--;
        }
    }
    int GetSize()
    {
        if (size - top >= 1)
        {
            return top + 1;
        }
    }
    bool Isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int Gettop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    void print()
    {
        cout << "top:" << top << " top data" << Gettop() << endl;
    }
};
// void push(int data) {
//                 if(size - top > 1) {
//                         //space available
//                         //insert
//                         top++;
//                         arr[top] = data;
//                 }
//                 else {
//                         //space not available
//                         cout << "Stack Overflow"<< endl;
//                 }
//         }

//         void pop() {
//                 if(top == -1 ) {
//                         //stack is empty
//                         cout << "Stack underflow, cant delete element" << endl;
//                 }
//                 else {
//                         //stack is not empty
//                         top--;
//                 }
//         }

//         int getTop() {
//                 if(top == -1) {
//                         cout << "There is not element in Stack " << endl;
//                 }
//                 else {
//                         return arr[top];
//                 }
//         }

//         //return number of valid elements present in stack
//         int getSize() {
//                 return top + 1;
//         }

//         bool isEmpty() {
//                 if(top == -1) {
//                         return true;
//                 }
//                 else {
//                         return false;
//                 }

//         }
// };
int main()
{
    //  stack s(5);
    //  s.push(10);
    //  s.print();
    //  s.push(20);
    //   s.print();
    //   s.push(30);
    //    s.print();
    //   s.push(400);
    //    s.print();
    //   s.push(500);
    //    s.print();
    //    s.push(60);
    //    cout<<s.Gettop();
    stack s(5);
    cout << "Empty Yess " << s.Isempty() << endl;
    cout << "Size:" << s.GetSize() << endl;
    s.push(10);
    cout << "Size:" << s.GetSize() << endl;
    s.push(20);
    cout << "Size:" << s.GetSize() << endl;
    s.push(30);
    cout << "Size:" << s.GetSize() << endl;
    s.push(40);
    cout << "Size:" << s.GetSize() << endl;
    s.push(50);
    cout << "Size:" << s.GetSize() << endl;

    s.print();
    s.pop();
    s.print();
    cout << "Size:" << s.GetSize() << endl;
    s.print();

    s.pop();
    cout << "Size:" << s.GetSize() << endl;
    s.print();
    cout << "Size:" << s.GetSize() << endl;
    s.pop();
    cout << "Size:" << s.GetSize() << endl;
    s.print();
    cout << "Size:" << s.GetSize() << endl;
    s.pop();
    cout << "Size:" << s.GetSize() << endl;
    s.print();
    s.pop();
    cout << "Size:" << s.GetSize() << endl;
    s.print();
    s.pop();
    cout << "Size:" << s.GetSize() << endl;
    s.print();
    cout << "Empty Yess " << s.Isempty() << endl;

    return 0;
}