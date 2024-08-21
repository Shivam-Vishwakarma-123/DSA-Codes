#include<iostream>
using namespace std;

//  Definition for a binary tree node.
  struct TreeNode {
         int val;
      TreeNode *left;
      TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
         TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
         TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     };


// ++++++++++++++++++++++valid Bst ++++++++++++++++++++
// class Solution {
// public:
//  bool solve(TreeNode*root,  long long int lb, long long int Rb){
//     if(root==NULL){
//         return true ;

//     }
//     if(root->val>lb&&root->val<Rb){
//         bool leftans=solve(root->left,lb,root->val);
//          bool rightans=solve(root->right,root->val,Rb);
//          return leftans&&rightans;
//     }
//     else {
//         return false;
//     }
//  }
//     bool isValidBST(TreeNode* root) {
//         long long int lowerBound=-4294967296;
//         long long int upperBound= 4294967296;
//         bool ans =solve(root,lowerBound,upperBound);
//         return ans;
//     }
// };
// Lowest Common Ancestor of a Binary Search Tree
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root==NULL){
//             return NULL;
//         }
//          if(p->val<root->val&&q->val<root->val){
//             return lowestCommonAncestor(root->left,p,q);
//         }
//         else if(p->val>root->val&&q->val>root->val){
//              return lowestCommonAncestor(root->right,p,q);
//         }
//         else{
//           return root;
//         }
//     }
// };`
// +++++++++++++++K smallest answer ++++++++++++

class Solution {
public:
    int kthSmallest(TreeNode* root, int& k) {
        // Base case: if the root is NULL, return -1
        if (root == nullptr) {
            return -1;
        }

        // Search in the left subtree
        int leftResult = kthSmallest(root->left, k);
        
        // If the k-th smallest element was found in the left subtree, return it
        if (leftResult != -1) {
            return leftResult;
        }

        // Process the current node
        k--;
        if (k == 0) {
            return root->val;
        }

        // Search in the right subtree
        return kthSmallest(root->right, k);
    }

    
};


int main ()
{

 return 0;
}