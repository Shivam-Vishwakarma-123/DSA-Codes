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

class Solution
{
    public:
    
  void printtopview(Node*root,vector<int>&ans){
      map<int,int>topnode;
    
      
      queue<pair<Node*,int>>q;
      q.push(make_pair(root,0));
      while(!q.empty()){
          pair<Node*,int>temp=q.front();
          q.pop();
          Node*frontnode=temp.first;
         int hd=temp.second;
         if(topnode.find(hd)==topnode.end()){
             topnode[hd]=frontnode->data;
         }
         if(frontnode->left){
             q.push(make_pair(frontnode->left,hd-1));
         }
         if(frontnode->right){
             q.push(make_pair(frontnode->right,hd+1));
         }
      }
      for(auto i:topnode){
          ans.push_back(i.second);
      }
      
    //   push the root node 
    
  }
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int>ans;
        printtopview(root,ans);
        return ans;
        
        //Your code here
    }

};
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



// Left View Of the tree My logic
void LeftViewOftree(Node*root,vector<int>&ans){
     unordered_map<int,int>level;
     queue<pair<Node*,int>>q;
     q.push(make_pair(root,0));
    //  q.push(make_pair(NULL,-1));
     while(!q.empty()){
         pair<Node*,int>temp=q.front();
         q.pop();
         Node*topnode=temp.first;
         int hd=temp.second;
        //  if(topnode==NULL){
        //      if(!q.empty()){
        //          q.push(make_pair(nullptr,-1));
        //      }
        //  }
         
             if(hd!=-1 && level.find(hd)==level.end()){
                 level[hd]=topnode->data;
                 ans.push_back(topnode->data);
             }
             
             if(topnode->left){
                 q.push(make_pair(topnode->left,hd+1));
             }
             if(topnode->right){
                 q.push(make_pair(topnode->right,hd+1));
             }
         
     }
     
       
     
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{vector<int>ans;
 LeftViewOftree(root,ans);
 return ans;
   // Your code here
}


// similarly for right view we first process the right view
class Solution{
    public:
void RightViewOfTree(TreeNode* root, vector<int>& ans) {
    if (!root) return;

    unordered_map<int, int> level;  // Map to track levels
    queue<pair<TreeNode*, int>> q;      // Queue for level-order traversal
    q.push(make_pair(root, 0));     // Push the root TreeNode with level 0

    while (!q.empty()) {
        pair<TreeNode*, int> temp = q.front();
        q.pop();

        TreeNode* topnode = temp.first;
        int hd = temp.second;

        // If this is the first node at the current level, add it to the result
        if (hd != -1 && level.find(hd) == level.end()) {
            level[hd] = topnode->val;
            ans.push_back(topnode->val);
        }

        // Push the right child first to ensure we process the rightmost node first
        if (topnode->right) {
            q.push(make_pair(topnode->right, hd + 1));
        }
        // Then push the left child
        if (topnode->left) {
            q.push(make_pair(topnode->left, hd + 1));
        }
    }
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
          RightViewOfTree(root,ans);
         return ans;
    }
};
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