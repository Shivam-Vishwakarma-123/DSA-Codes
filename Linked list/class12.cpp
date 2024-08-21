#include<iostream>
using namespace std;
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
    cout<<endl;
    }
    void insertAthead(Node*&head,Node*&tail ,int data){
        // If LL is Empty 
        if(head==NULL) {
            Node*newnode=new Node(data);
            head=newnode;
            tail=newnode;
            return ;

        }
        // Step-1
        // New Node creation 
        Node*newnode=new Node(data);
        // Step-2
        newnode->next=head;
        // step-3
        head=newnode;
    }
// Insertion at tail

void insertAtTail(Node*&head,Node*&tail ,int data){
    
        // If LL is EMpty
        if(tail==NULL) {
            Node*newnode=new Node(data);
            head=newnode;
            tail=newnode;

        }
        // Step-1
        // New Node creation
        else{

        Node*newnode=new Node(data);
        // Step-2
        tail->next=newnode;
        // step-3
     tail=newnode;}
    }
 int getLLlenth(Node*&head){
int length=0;
Node*temp=head;
  while(temp!=NULL){
       
        temp=temp->next;
         length++;
        }
        return length;

 }
 void insertAtPosition(int data,int position ,Node*&head,Node*&tail){
    // Edge cases
    // for position=0
    if(position==0){
insertAthead(head,tail,data);
return ;
    }
     // for position at last
     int length=getLLlenth(head);
     if(position>=length){
        insertAtTail(head,tail,data);
     }
// For LL to be empty

  if(head==NULL){
    Node*newnode=new Node(data);
    head=newnode;
    tail=newnode;
    return ;
  }
//   Step-1
// reach to the position 
 int i=1;
 Node *Prev=head;
 while(i<position){
   Prev=Prev->next;
   i++;
 }
 Node*curr=Prev->next;
 Node*newnode=new Node(data);
 newnode->next=curr;
 Prev->next=newnode;


 }
 void deletenode(int position ,Node*&head,Node*&tail){
    if(head==NULL){
        cout<<"Can't delete LL is Empty "<<endl;
    }
    // Delete at head 
    if(position==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return ;
    }

    // find position 
    int i=1;
    Node *Prev=head;
 while(i<position-1){
   Prev=Prev->next;
   i++;
 }
//  Deleting Middle element
{
    Node*temp=Prev->next;
    Prev->next=temp->next;
    temp->next=NULL;
    delete temp;
    return ;
}
 
//  Handling deleting of last element
if(position = getLLlenth(head)){
  Node*temp=tail;
   Prev->next=NULL;
  tail=Prev;
 
delete temp;
return ;}


 }
int main ()
 {  // Node*head=new Node(10)
//  kyuki print function null wale ko point nhio karega 
    Node*head=NULL;
    Node*tail=NULL;
    insertAthead(head,tail,20);
     insertAthead(head,tail,30);
      insertAthead(head,tail,40);
       insertAthead(head,tail,50);
        insertAthead(head,tail,60);
        insertAtTail(head,tail,77);
     print(head);
    //  cout<<getLLlenth(head);
    //  insertAtPosition(111,7,head,tail);
    //    print(head);
       deletenode(8,head,tail);
       print(head);

 return 0;
}