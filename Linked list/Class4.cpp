#include<iostream>
using namespace std;
class Node{
    public:
 int data;
 Node*next;

 Node(){
    this->data=0;
    this->next=0;
 }
 Node(int data){
    this->data=data;

    
 }
};
Node*Reverse(Node* head){
  Node*prev=NULL;
  Node*curr=head;
  Node*forward=curr->next;
  while(curr!=NULL){
    Node*forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
  }
  return prev;
}
bool Checkpalindrome(Node*head){
    if(head==NULL){
        // LL is empty 
        return false;
    }
     if(head->next==NULL){
        // LL is empty 
        return true ;
    }
    // finding the Middle node 
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL){
        fast=fast->next;
      if(fast!=NULL){
         fast=fast->next;
          slow=slow->next;
      }
    }
    // slow pointer is pointing towards middle Node 
    Node*reverseLLkahead=Reverse(slow->next);
    slow->next=reverseLLkahead;
    // step-3
    // Comparision 
    Node*temp1=head;
    Node*temp2=reverseLLkahead;
     while(temp2!=NULL){
        if(temp1->data!=temp2->data){
            return false;
        }
     
     else
     {
        temp1=temp1->next;
        temp2=temp2->next;
        

     }}
     return true;

}
void RemoveDuplicate(Node*&head){
    if(head==NULL){
        return ;
    }
    if(head->next==NULL){
        return ;
    }
    Node*curr=head;
    while(curr!=NULL){
        if(curr->next!=NULL&&curr->data==(curr->next)->data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            temp->next=NULL;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }
}
void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main ()
{Node*head= new Node(10);
Node*second=new Node(20);
Node*third=new Node(20);
Node*fourth=new Node(20);
Node*fifth=new Node(30);
Node*sixth=new Node(40);

head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;
sixth->next=NULL;
// cout<<Checkpalindrome(head);
print(head);
RemoveDuplicate(head);
print(head);
 return 0;
}