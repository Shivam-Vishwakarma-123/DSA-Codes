#include <iostream>
#include <vector>
#include <map>
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
void PrintTopView(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Storing a Map for Storing HD-> of topnode->data
    map<int, int> topnode;
    //  level order traversal
    // pair consisting of node and horizontal distance
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();
        Node *frontnode = temp.first;
        int hd = temp.second;

        //  jo bhi horizontal distance aaya h ,check if answer for that hd already exitss or  not
        if (topnode.find(hd) == topnode.end())
        {
            // create entry
            topnode[hd] = frontnode->data;
        }
        if (frontnode->left)
        {
            q.push(make_pair(frontnode->left, hd - 1));
        }
        if (frontnode->right)
        {
            q.push(make_pair(frontnode->right, hd + 1));
        }
    }
    // ab answer store hua hoga aapke map me
    cout << "Printing the ans " << endl;
    for (auto i : topnode)
    {
        cout << i.first << " -> " << i.second << endl;
    }
}

void PrintBottomView(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Storing a Map for Storing HD-> of topnode->data
    map<int, int> topnode;
    //  level order traversal
    // pair consisting of node and horizontal distance
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();
        Node *frontnode = temp.first;
        int hd = temp.second;

        //  jo bhi horizontal distance aaya h ,check if answer for that hd already exitss or  not

        // create entry
        topnode[hd] = frontnode->data;
        if (frontnode->left)
        {
            q.push(make_pair(frontnode->left, hd - 1));
        }
        if (frontnode->right)
        {
            q.push(make_pair(frontnode->right, hd + 1));
        }
    }
    // ab answer store hua hoga aapke map me
    cout << "Printing the ans " << endl;
    for (auto i : topnode)
    {
        cout << i.first << " -> " << i.second << endl;
    }
}
void PrintleftTree(Node *root, vector<int> &ans, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (level == ans.size())
    {
        ans.push_back(root->data);
    }
    //   left
    PrintleftTree(root->left, ans, level + 1);
    //  Right
    PrintleftTree(root->right, ans, level + 1);
}
void PrintLeftNode(Node *root)
{
    //   Base Case
    if (root == NULL)
    {
        return;
    }
    //   root node mil jaye
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    cout << root->data << "  ";
    if (root->left)
    {
        PrintLeftNode(root->left);
    }
    else
    {
        PrintLeftNode(root->right);
    }
};

void PrintLeafBoundary(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    //   root node mil jaye
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
    }
    // / / left ka print karke lao 
    PrintLeafBoundary(root->left);
    //  right ka print karke lao
    PrintLeafBoundary(root->right);
};
void PrintRightBoundary(Node*root){
    // Phele right me jaate jao 
    if (root == NULL)
    {
        return;
    }
    //   root node mil jaye
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    if(root->right){
        PrintRightBoundary(root->right);
    
    }
    else{
        PrintRightBoundary(root->left);
    }
    cout<<root->data<<" ";

};

void PrintBoundary(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    PrintLeftNode(root->left);
    PrintLeafBoundary(root);
    PrintRightBoundary(root->right);
}
int main()
{
    Node *root = Buildtree();

    vector<int> ans;
    cout << "Printing the answer " << endl;
    // PrintleftTree(root, ans, 0);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
     PrintBoundary(root);
    return 0;
}