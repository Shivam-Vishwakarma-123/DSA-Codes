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
  Node*BstFromInorder(int inorder[],int start,int end){
    if(start>end){
        return NULL;

    }
    int mid=(start+end)/2;
    Node*root=new Node(inorder[mid]);
    root->left=BstFromInorder(inorder,start,mid-1);
    root->right=BstFromInorder(inorder,mid+1,end);
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
void getinorder(Node*root,vector<int>&inorder){
    if(root==NULL){
return;
    }
    getinorder(root->left,inorder);
    inorder.push_back(root->data);
    getinorder(root->right,inorder);
}
void print2sum(Node*root,int target){
    vector<int>inorder;
    getinorder(root,inorder);
    int s=0;
    int e=inorder.size()-1;
    while(s<e){
        if(inorder[s]+inorder[e]>target){
            e--;
        }
        else if(inorder[s]+inorder[e]<target){
            s++;
        }
        else{
            cout<<inorder[s]<<" "<<inorder[e]<<endl;;
            s++;
        }
    }
}
int main ()
{
    int inorder[]={10,20,30,40,50,60,70,80};
    Node*root=BstFromInorder(inorder,0,7);
    levelOrderTraversal(root);
    print2sum(root,80);

 return 0;
}