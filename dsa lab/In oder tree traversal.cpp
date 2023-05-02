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

// Function to perform in-order traversal
void inOrderTraversal(Node* root) {
    if (root == NULL) return; // Base case: return if the current node is NULL
    inOrderTraversal(root->left); // Recursively call inOrderTraversal on the left subtree
    cout << root->data << " "; // Print the data of the current node
    inOrderTraversal(root->right); // Recursively call inOrderTraversal on the right subtree
}

// Main function to test the in-order traversal
int main() {
    // Create a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Perform in-order traversal
    cout << "In-order traversal of the binary tree: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}

