// Tree creation using cpp
#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *Buildtree()
{
    int data;
    cout << "Enter the data" << endl;
    cin >> data;
    if (data == -1)
    {
        // Base case
        return NULL;
    }
    // step A
    Node *root = new Node(data);
    cout << "Enter the data for the left part of " << data << " node " << endl;
    root->left = Buildtree();
    cout << "Enter the data for the Right  part of " << data << " node " << endl;
    root->right = Buildtree();
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

void inordertraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // LNR
    inordertraversal(root->left);
    cout << root->data;
    inordertraversal(root->right);
}
void preordertraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // NLR
    cout << root->data;
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
    cout << root->data;
}
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);

    return max(leftheight, rightheight) + 1;
}
class Solution
{
public:
    int maxDepth(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int leftheight = maxDepth(root->left);
        int rightheight = maxDepth(root->right);

        return max(leftheight, rightheight) + 1;
    }
    int diameterOfBinaryTree(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int opt1 = diameterOfBinaryTree(root->left);
        int opt2 = diameterOfBinaryTree(root->right);
        int opt3 = maxDepth(root->left) + maxDepth(root->right);
        int maxi = max(opt1, max(opt2, opt3));
        return maxi;
    }
};
int main()
{
    Node *root = NULL;
    root = Buildtree();
    inordertraversal(root);
    cout<<endl;
    preordertraversal(root);
    cout<<endl;
    postordertraversal(root);
    cout<<endl;

    return 0;
}