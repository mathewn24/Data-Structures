/*
Implementing DFS tree traversal inorder algorithim.
*/

#include <iostream>

class Node {
    public:
        int val;
        Node* left;
        Node* right;
};

Node* createNode(int num) {
    Node* node = new Node();
    node->val = num;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

void printTree(Node* root) {

    if (root == nullptr) {
        return;
    }
    std::cout << root->val << std::endl;

    printTree(root->left);
    printTree(root->right);
}

int main() {

    // Creating a binary tree.
    // Level 1
    Node* root = createNode(1);

    // Level 2
    root->left = createNode(2);
    root->right = createNode(3);

    // Level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    //level 4
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    printTree(root);

    return 0;
}