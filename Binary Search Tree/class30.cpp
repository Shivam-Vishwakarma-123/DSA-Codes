#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
  int data ;
  Node*left;
  Node*right;
  Node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
  }
  };
  Node *BstUsingInorder(int inorder[],int start,int end){
    // base case 
    if(start>end){
        return NULL;
    }
    int mid =(start+end)/2;
    Node *root=new Node(inorder[mid]);
    root->left=BstUsingInorder(inorder,start,mid-1);
    root->right=BstUsingInorder(inorder,mid+1,end);
    return root;
  }
  void levelOrderTraversal(Node* root ) {
    cout<<"LOT "<<endl;
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}
void ConvertIntoSortedLL(Node*root,Node*&head){

  if(root==NULL){
    return ;

  }
  // right subtree ko ll me convert kardo
  ConvertIntoSortedLL(root->right,head);
  // right me LL aagayi
  root->right=head;
  if(head!=NULL){
    // head ka previous root par point kar rhe 
    head->left=root;

  }
  // update head
  head=root;
  // 
    // left  subtree ko ll me convert kardo
  ConvertIntoSortedLL(root->left,head);}

void PrintLL(Node* head){
 
Node*temp=head;
while(temp!=NULL){

  cout<<temp->data<<" ";
  temp=temp->right;
}
}

Node*SortedLLToBst(Node*&head,int n){
  if(n<=0||head==NULL){
    return NULL;
  }
  Node*leftsubtree=SortedLLToBst(head,n-1-n/2);
  Node*root=head;
  root->left=leftsubtree;
  head=head->right;
  // right part ko solve karna 
  root->right=SortedLLToBst(head,n/2);
  return root;

}
int main ()

{
     int inorderarr[]={10,20,30,40,50,60,70,80};
     Node*root=BstUsingInorder(inorderarr,0,7);
   levelOrderTraversal(root);
   Node*head=NULL;
   ConvertIntoSortedLL(root,head);
   PrintLL(head);

   cout<<endl;
   Node*root2=NULL;
   root2=SortedLLToBst(head,8);
   levelOrderTraversal(root2);
   


 return 0;
}