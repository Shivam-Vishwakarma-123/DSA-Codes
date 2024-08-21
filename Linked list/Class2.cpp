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

int getLength(Node* &head) {
    Node* temp = head;
    int length = 0;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(Node*& head, Node*& tail, int data) { 
    // If LL is Empty
    if (head == NULL) {
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    // Creation of Node 
    Node* newnode = new Node(data);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    return;
}

void insertAtTail(Node*& head, Node*& tail, int data) { 
    // Create a new node
    Node* newnode = new Node(data);

    // If the list is empty
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        // Link the new node with the last node
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}
void insertatPosition(Node*& head, Node*& tail, int data,int position){
    if(position==1){
        // Insert at head 
        insertAtHead(head,tail,data);
        return ;
    }
     if(position>getLength(head)){
        // Insert at head 
        insertAtTail(head,tail,data);
        return ;
    }
      int i=1;
    //   Step-1;
      Node*prevnode=head;
      while(i<position-1){
      prevnode=prevnode->next;
      i++;

      }

      Node*curr=prevnode->next;
    //   Step-2;
    Node *newnode=new Node(data);
    prevnode->next=newnode;
    newnode->prev=prevnode;
       newnode->next=curr;
       curr->prev=newnode;

return;

    
}
void deleteNode(Node*& head, Node*& tail, int position){
    if(position==1){
        Node*temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return ;

    }
     if(position==getLength(head)){
       Node*temp=tail;
       tail=tail->prev;
       temp->prev=NULL;
       temp->next=NULL;
       tail->next=NULL;
        delete temp;
        return ;

    }
    int i=1;
    //   Step-1;
      Node*left=head;
      while(i<position-1){
      left=left->next;
      i++;

      }
      Node*curr=left->next;
      Node*Right=curr->next;

      left->next=Right;
      Right->prev=left;
      curr->prev=NULL;
       curr->next=NULL;
       delete curr;

    return ;


}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return;
}

int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* tail = third;

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;

    insertAtTail(first, tail, 111);
    // print(first);
    insertatPosition(first,tail,50,100);
    print(first);
    deleteNode(first,tail,5);
 print(first);
    return 0;
}
