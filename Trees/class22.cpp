#include<iostream>
using namespace std;



//User function Template for C++

// Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};




Node* Kthancestor(Node *root, int &k, int node) {
    // Base case: if root is null, return null
    if (root == NULL) {
        return NULL;
    }

    // If we have found the target node
    if (root->data == node) {
        return root;
    }

    // Search in left and right subtrees
    Node* leftAnswer = Kthancestor(root->left, k, node);
    Node* rightAnswer = Kthancestor(root->right, k, node);
// see we will only decrement when we get ancestor that is either right is notNULL or left is notnull
    // If the node was found in either left or right subtree
    if (leftAnswer != NULL || rightAnswer != NULL) {
        // Decrement k only after finding the node
        k--;

        // If k becomes 0, the current node is the ancestor
        if (k == 0) {
            return root;
        }

        // Return the non-null answer from the recursive calls
        return leftAnswer != NULL ? leftAnswer : rightAnswer;
    }

    // If the node was not found, return null
    return NULL;
}

int kthAncestor(Node *root, int k, int node) {
    // Call the helper function with the given k and node
    Node* ans = Kthancestor(root, k, node);

    // If ans is NULL or k is not 0, return -1 (indicating no ancestor exists)
    if (ans == NULL || k > 0) {
        return -1;
    }

    // Return the data of the kth ancestor
    return ans->data;
}