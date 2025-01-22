/*
An implementation of a doubly linked list.
Can insert at the head, tail, before a node, and after a node.

*/
#include<iostream>

class Node {
    public:
        int val;
        Node* next;
        Node* previous;
};

void printList(Node* head) {
    Node* start = head;
    while (start){
        std::cout << start->val << std::endl;
        start = start->next;
    }
}

void reverseList(Node* tail){
    Node* start = tail;
    while (start){
        std::cout << start->val << std::endl;
        start = start->previous;
    }
}

Node* insertNode(Node* tail, int amt){
    // Add the next node.
    Node* node = new Node();
    node->val = amt;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;
    return tail;
}

int main(){
    Node* head;
    Node* tail;

    Node* node = new Node();
    node->val = 4;
    node->next = nullptr;
    node->previous = nullptr;

// First node is both the head and the tail for now.
    head = node;
    tail = node;

// Add the second node.
    tail = insertNode(tail, 5);
// Add the next node.
    tail = insertNode(tail, 6);

// Print linked list.
    printList(head);
    reverseList(tail);

    return 0;
}