#include<iostream>
#include<queue>
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
int main ()
{
     Node *root = NULL;
    root = Buildtree();
   levelOrderTraversal(root);

 return 0;
}