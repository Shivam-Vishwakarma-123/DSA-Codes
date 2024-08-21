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
Node* middleNode(Node*&head){
    if(head==NULL){
        cout<<"LL is empty";
        return head;

    }
    if(head->next==NULL){
        return head;
    }
    Node*slow=head;
    Node*Fast=head;
    while(slow!=NULL&&Fast!=NULL){
       Fast=Fast->next;
       if(Fast!=NULL){
        Fast=Fast->next;
        slow=slow->next;
       }
       

    }
    return slow;
}
void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getLength(Node*head){
    Node*temp=head;
    int length=0;
    while(temp!=NULL){
        temp=temp->next;
        length++
;    }
return length;
}
Node* ReverseinKgroup(Node*&head,int k){
    if(head==NULL){
        // LL is empty 
        return NULL;
    }
    if(k>getLength(head)){
        //
        cout<<"Enter valid value of K"<<endl;
        return head;
    }
    Node*prev=NULL;
    Node* curr=head;
    Node*forward=curr->next;
    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }

    // Recursive call
    if(forward!=NULL){
        head->next=ReverseinKgroup(forward,k);
    }
    return prev;
}
bool checkloop(Node*&head){
    if(head==NULL){
        return false;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow){
            return true;
        }
    }
    return false;
}
Node*  GetStartingPoint(Node*&head){
    if(head==NULL){
        return NULL;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow){
            slow=head;
            break;
        }
    }
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}


int main ()
{
Node*head= new Node(10);
Node*second=new Node(20);
Node*third=new Node(30);
Node*fourth=new Node(40);
Node*fifth=new Node(50);
Node*sixth=new Node(70);
Node*seventh=new Node(80);
Node*eight=new Node(90);
Node*nineth=new Node(100);
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;
sixth->next=seventh;
seventh->next=eight;
eight->next=nineth;
nineth->next=fifth;
// nineth->next=NULL;
// print(head);
// cout<<middleNode(head)->data;
// head=ReverseinKgroup(head,3);
// print(head);
// cout<<checkloop(head);
cout<<endl;
cout<< GetStartingPoint(head)->data;
 return 0;
}