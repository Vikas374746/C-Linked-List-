#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int val;
    Node* next;

    // Constructor to initialize node
    Node(int data) {
        val = data;
        next = NULL;
    }
};

// Function to insert a node at the end
void insertAtEnd(Node* &head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main() {
    Node* head = NULL; // empty list initially

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Singly Linked List: ";
    display(head);

    return 0;
}
