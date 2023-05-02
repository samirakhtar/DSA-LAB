#include <iostream>
using namespace std;

// Definition for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to perform post-order traversal
void postOrderTraversal(Node* root) {
    if (root == NULL) return; // Base case: return if the current node is NULL
    postOrderTraversal(root->left); // Recursively call postOrderTraversal on the left subtree
    postOrderTraversal(root->right); // Recursively call postOrderTraversal on the right subtree
    cout << root->data << " "; // Print the data of the current node
}

// Main function to test the post-order traversal
int main() {
    // Create a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Perform post-order traversal
    cout << "Post-order traversal of the binary tree: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}

