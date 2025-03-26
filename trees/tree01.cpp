#include <iostream>
using namespace std;

// Define a structure for the tree node
struct Node {
    int data;         // Value stored in the node
    Node* left;       // Pointer to the left child
    Node* right;      // Pointer to the right child

    // Constructor to initialize a node
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to perform an in-order traversal (Left → Root → Right)
void inOrderTraversal(Node* root) {
    if (root == nullptr) {
        return; // Base case: If the node is null, return
    }
    inOrderTraversal(root->left);      // Traverse left subtree
    cout << root->data << " ";         // Visit root
    inOrderTraversal(root->right);     // Traverse right subtree
}

// Function to perform a pre-order traversal (Root → Left → Right)
void preOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";         // Visit root
    preOrderTraversal(root->left);     // Traverse left subtree
    preOrderTraversal(root->right);    // Traverse right subtree
}

// Function to perform a post-order traversal (Left → Right → Root)
void postOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    postOrderTraversal(root->left);    // Traverse left subtree
    postOrderTraversal(root->right);   // Traverse right subtree
    cout << root->data << " ";         // Visit root
}

int main() {
    // Create a simple binary tree:
    //         1
    //        / \
    //       2   3
    //      / \
    //     4   5

    Node* root = new Node(1);          // Root node
    root->left = new Node(2);          // Left child of root
    root->right = new Node(3);         // Right child of root
    root->left->left = new Node(4);    // Left child of 2
    root->left->right = new Node(5);   // Right child of 2

    cout << "In-order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}
