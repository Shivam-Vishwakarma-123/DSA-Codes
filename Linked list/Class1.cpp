#include<iostream>
using namespace std;
// Creation of class 
class Node{
    public:
    int data;
    Node* next;
    // Constructor
    Node(){
        this->data=0;
        this->next=NULL;
    }
    // Constructor
     Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main ()
{
    Node*first=new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    Node*fourth=new Node(40);
    Node*fivth=new Node(50);

  first->next=second;
  second->next=third;
    third->next=fourth;
    fourth->next=fivth   ;
  cout<<"printingLL"<<endl;
  print(first);

 return 0;
}
