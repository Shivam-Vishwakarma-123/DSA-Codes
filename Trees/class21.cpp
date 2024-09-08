#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};
class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int  toSumTree(Node *node)
    {
        // Your code heref()
        if(node==NULL){
            return 0;
        }
        int leftans=toSumTree(node->left);
        int rightans=toSumTree(node->right);
        node->data= node->data+leftans+rightans;
        return node->data;
    }
};


class Solution {
  public:
  int helperFunction(Node* root) {
      // Base case: If the node is null, return 0 (null contributes 0 sum)
      if (root == nullptr) {
          return 0; 
      }

      // If the node is a leaf, return its value (leaf is always a sum tree)
      if (root->left == nullptr && root->right == nullptr) {
          return root->data;
      }

      // Recursively calculate the sum of left and right subtrees
      int leftAnswer = helperFunction(root->left);
      int rightAnswer = helperFunction(root->right);

      // If any subtree is not a sum tree, return -1 to propagate the failure
      if (leftAnswer == -1 || rightAnswer == -1) {
          return -1;
      }

      // Check if the current node satisfies the sum tree property
      if (root->data != leftAnswer + rightAnswer) {
          return -1;  // Not a sum tree
      }

      // Return the total sum of the current subtree
      return root->data + leftAnswer + rightAnswer;
  }

  bool isSumTree(Node* root) {
      // Call the helper function and check if the result is not -1
      return helperFunction(root) != -1;
  }
};

class Solution {
  public:
  
  int getsumtree(Node* &root){
      // Base case: if the node is null, return 0
      if(root == nullptr){
          return 0;
      }
    
      // Recursively get the sum of the left and right subtrees
      int leftSum = getsumtree(root->left);
      int rightSum = getsumtree(root->right);
      
      // Store the current node's value
      int oldValue = root->data;
      
      // Update the current node's value to the sum of its left and right subtrees
      root->data = leftSum + rightSum;
      
      // Return the sum of the subtree rooted at the current node, which is the original value plus the sum of the left and right subtrees
      return oldValue + root->data;
  }
  
  // Convert a given tree to a tree where every node contains the sum of values of
  // nodes in left and right subtrees in the original tree
  void toSumTree(Node *node)
  {
      getsumtree(node);
  }
};
// LCR 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(root->val==p->val){
            return p;
        }
        if(root->val==q->val){
            return q;
        }
        TreeNode* leftkaans=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightkaans=lowestCommonAncestor(root->right,p,q);
        if(leftkaans==NULL&&rightkaans==NULL){
            return NULL;
        }
        else if(leftkaans==NULL&&rightkaans!=NULL){
           return rightkaans;
        }
        else if(leftkaans!=NULL&&rightkaans==NULL){
           return leftkaans;
        }
        else{
            return root;
        }
    }
};
class Solution {
public:
  void solve(TreeNode* root, int targetSum,int Currsum, vector<int>temp, vector<vector<int> >&ans){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL&&root->right==NULL){
        Currsum+=root->val;
        temp.push_back(root->val);
        if(Currsum==targetSum){
            ans.push_back(temp);
        }
        return ;
    }
     Currsum+=root->val;

        temp.push_back(root->val);
        solve(root->left,targetSum,Currsum,temp,ans);
        solve(root->right,targetSum,Currsum,temp,ans);

  }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int> >ans;
        int sum=0;
        vector<int>temp;
        solve(root,targetSum,sum,temp,ans);
        return ans;
    }
};
int main ()
{

 return 0;
}