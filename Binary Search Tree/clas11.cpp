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
  void inordertraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // LNR
    inordertraversal(root->left);
    cout << root->data<<" ";
    inordertraversal(root->right);
}
void preordertraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // NLR
    cout << root->data<<" ";
    preordertraversal(root->left);

    preordertraversal(root->right);
}
void postordertraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // LRN

    postordertraversal(root->left);

    postordertraversal(root->right);
    cout << root->data<<" ";
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
  Node* insertIntoBst(Node* root ,int data){
    // for a first Node 
    if(root==NULL){
       root=new Node(data);
       return root;
    }
    else{
        if(root->data>data){
           root->left=insertIntoBst(root->left,data); 
        }
        else if(root->data<data){
            root->right=insertIntoBst(root->right,data); 
        }
    }
    return root;
  }
  void takeinput(Node*&root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
  }

//   class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int target) {
//         TreeNode*temp=root;
//         while(temp!=NULL){
//             if(target==temp->val){
//                 return temp;
//             }
//             else if(target<temp->val){
                
//                     temp=temp->left;
                
//             }
//             else if(target>temp->val){
                  
//                     temp=temp->right;
                
//             }
//         }
//         return NULL;
//     }
// };

bool FindTargetInBst(Node *root,int target){
    if(root==NULL){
        // aakiri tak pahuch gaye he 
        return false ;
    }
    if(root->data==target){
        return true ;
    }
    if(root->data<target){
        // search Zright
        return FindTargetInBst(root->right,target);

    }
    else {
        // search left
        return FindTargetInBst(root->left,target);
    }
    
}
int GetMin(Node*root){
    if(root==NULL){
        return -1;

    }
    Node *temp=root;

    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}
int GetMax(Node*root){
    if(root==NULL){
        return -1;

    }
    Node *temp=root;

    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}
Node* deleteNodeInBST(Node* root, int target) {
	
	//base cae
	if(root == NULL ) {
		return NULL;
	}
//cout << "Request recieved for " >> root->data << " with target" << target << endl;
	if(root->data == target) {
		//isi ko delete krna h 
		//4 cases 
		if(root->left == NULL && root->right == NULL) {
			//leaf node
			//delete root;
			return NULL;
		}
		else if(root->left == NULL && root->right != NULL) {
			Node* child = root->right;
			//delete root;
			return child;
		}
		else if(root->left != NULL && root->right == NULL) {
			Node* child  = root->left;
			//delete root;
			return child;
		}
		else {
			//both child
			//find inorder predecessor inb left subtree
			int inorderPre = GetMax(root->left);
			//replace root->data value with inorder predecessor
			root->data = inorderPre;
			//delete inorder predecessor from left subtree
			root->left = deleteNodeInBST(root->left,inorderPre);
			return root;
			
		}
		
	}
	else if(target > root -> data) {
		//right jana chahiye
		root->right =  deleteNodeInBST(root->right, target);
	}
	else if(target < root->data) {
		//left jana chahioye
		root->left = deleteNodeInBST(root->left, target);
	}
	return root;
}



int main ()
{Node *root=NULL;
 cout<<"Enter the data "<<endl;
takeinput(root);
levelOrderTraversal(root);
// cout<<"Printing Inoreder"<<endl;
// inordertraversal(root);
// cout<<"Printing preorder"<<endl;
// preordertraversal(root);
// cout<<"Printing postorder"<<endl;
// postordertraversal(root);
// cout<<FindTargetInBst(root,255);
cout<<endl<<"The Minimum value in a tree "<<GetMin(root);
cout<<endl<<"The Maximum value in a tree "<<GetMax(root);
deleteNodeInBST(root,10);
levelOrderTraversal(root);

 return 0;
}