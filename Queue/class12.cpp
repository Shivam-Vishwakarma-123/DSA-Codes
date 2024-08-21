#include<iostream>
using namespace std;
class cirqueue{
   
 int *arr;
 int size;
 int front;
 int rear;
 cirqueue(int size)
  {this->size=size;
        this->front=-1;
        this->rear=-1;
        arr=new int[size];}

 void push(int data){
    if((front == 0 && rear==size-1) || rear==front-1){
        cout<<" Queue is full"<<endl;
        return ;
    }
    // single element
    else if (front=-1){
        front=0;
        rear=0;
        arr[rear]=data;
    }
    // Circular flow 
    else if(rear=size-1&&front!=0){
        rear=0;
        arr[rear]=data;

    }
    // normal flow 
    else{
        rear++;
        arr[rear]=data;
    }
}
void pop(){
    if(front==-1){
        cout<<"Can't pop Queue is empty";

    }
    else if(front==rear){
        arr[front]=-1;
        front=-1;
        rear=-1;

    }
    else if(front==size-1){
        front=0;
    }
    else{
        front++;
    }
}


};


int main ()
{

 return 0;
}