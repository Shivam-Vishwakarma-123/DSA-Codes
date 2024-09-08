#include<iostream>
#include<vector>
using namespace std;

// Class for the tree node
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Sum Tree Conversion Solution
class SumTreeSolution {
  public:
    int toSumTree(Node* node) {
        if (node == NULL) {
            return 0;
        }
        int leftAns = toSumTree(node->left);
        int rightAns = toSumTree(node->right);
        node->data = node->data + leftAns + rightAns;
        return node->data;
    }
};

// Sum Tree Validation Solution
class ValidateSumTreeSolution {
  public:
    int helperFunction(Node* root) {
        if (root == nullptr) {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return root->data;
        }
        int leftAnswer = helperFunction(root->left);
        int rightAnswer = helperFunction(root->right);
        if (leftAnswer == -1 || rightAnswer == -1) {
            return -1;
        }
        if (root->data != leftAnswer + rightAnswer) {
            return -1;
        }
        return root->data + leftAnswer + rightAnswer;
    }

    bool isSumTree(Node* root) {
        return helperFunction(root) != -1;
    }
};

// Another Sum Tree Conversion Solution
class AnotherSumTreeSolution {
  public:
    int getSumTree(Node* &root) {
        if (root == nullptr) {
            return 0;
        }
        int leftSum = getSumTree(root->left);
        int rightSum = getSumTree(root->right);
        int oldValue = root->data;
        root->data = leftSum + rightSum;
        return oldValue + root->data;
    }
    void toSumTree(Node *node) {
        getSumTree(node);
    }
};

// Lowest Common Ancestor Solution
class LCA_Solution {
public:
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) {
            return NULL;
        }
        if (root->val == p->val) {
            return p;
        }
        if (root->val == q->val) {
            return q;
        }
        TreeNode* leftAnswer = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightAnswer = lowestCommonAncestor(root->right, p, q);
        if (leftAnswer == NULL && rightAnswer == NULL) {
            return NULL;
        } else if (leftAnswer == NULL) {
            return rightAnswer;
        } else if (rightAnswer == NULL) {
            return leftAnswer;
        } else {
            return root;
        }
    }
};

// Path Sum Solution
class PathSumSolution {
public:
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

    void solve(TreeNode* root, int targetSum, int currSum, vector<int> temp, vector<vector<int>>& ans) {
        if (root == NULL) {
            return;
        }
        if (root->left == NULL && root->right == NULL) {
            currSum += root->val;
            temp.push_back(root->val);
            if (currSum == targetSum) {
                ans.push_back(temp);
            }
            return;
        }
        currSum += root->val;
        temp.push_back(root->val);
        solve(root->left, targetSum, currSum, temp, ans);
        solve(root->right, targetSum, currSum, temp, ans);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        int sum = 0;
        vector<int> temp;
        solve(root, targetSum, sum, temp, ans);
        return ans;
    }
};

int main() {
    // You can create test cases here to test different solutions
    return 0;
}
