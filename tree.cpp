#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};
// New line.
Node* createNode(int data) {
    Node* newNode;
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

int main() {
/*
To represent a binary tree as below:a
      1
     /  \
    2    3
   / \  / \
  4  5  6  7
    /     /
   9     15
*/
Node* root = createNode(1);

root->left = createNode(2);
root->right = createNode(3);

root->left->left = createNode(4);
root->left->right = createNode(5);
root->right->left = createNode(6);
root->right->right = createNode(7);

root->left->right->left = createNode(9);
root->right->right->left = createNode(15);
    
return 0;
}
