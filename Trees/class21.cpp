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