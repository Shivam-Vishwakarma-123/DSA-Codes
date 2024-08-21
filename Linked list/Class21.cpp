#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node() {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    // Constructor with data
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* reverse(Node* &prev, Node* &curr){
// Base Case 
if(curr==NULL){
    return prev;
}
Node*forward=curr->next;
curr->next=prev;
reverse(curr,forward);
}
Node* reverseusingloop(Node*&head){
    Node*prev=NULL;
    Node*curr=head;
    
    while(curr!=NULL){
        Node*temp =curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;

    }
    return prev;
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
    print(first);
    
Node*prev=NULL;
Node*curr=first;
Node*head=reverse(prev,curr);
cout<<endl;
print(head);
 return 0;
}