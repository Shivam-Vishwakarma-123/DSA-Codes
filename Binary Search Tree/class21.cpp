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

int main ()
{   int inorderarr[]={10,20,30,40,50,60,70,80};
   Node*root=BstUsingInorder(inorderarr,0,7);
   levelOrderTraversal(root);

 return 0;
}
