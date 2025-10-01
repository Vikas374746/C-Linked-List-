# EXPERIMENT NO – 17

* Aim: To study and implement Linked List in C++ for dynamic memory allocation and efficient data management.

* Tools Used: IDE, C++ compiler, classes, pointers, dynamic memory (new and delete).

* Theory:

In C++, a Linked List is a linear data structure where elements (called nodes) are connected using pointers. Unlike arrays, linked lists do not store elements in contiguous memory locations; instead, each node contains data and a pointer to the next node.

-The first node is called the head of the list.

-The last node points to NULL, indicating the end of the list.

-Linked lists allow dynamic memory allocation, meaning nodes can be created and deleted at runtime.

🔹 *Key Features of Linked Lists:*

* Dynamic size (can grow or shrink during execution).

* Efficient insertions and deletions compared to arrays.

* Sequential access (no direct indexing like arrays).

🔹 *Basic Structure of a Linked List Node:*

    class Node {
    public:
    int data;      // stores the value
    Node* next;    // pointer to the next node

    Node(int val) {
        data = val;
        next = NULL;
    }
    };


🔹 *Common Operations in Linked List:*

* Insertion

-At the beginning (head).

-At the end (tail).

-At a specific position.

* Deletion

-From the beginning.

-From the end.

-From a given position.

* Traversal

-Display all nodes by moving from head to NULL.


🔹 *Advantages of Linked List:*

* Dynamic memory allocation, no fixed size.

* Efficient insertions and deletions compared to arrays.

* Can implement advanced data structures (stacks, queues, graphs).


# Single node of the Linked List:

This program demonstrates how to create a node for a singly linked list. Each node contains a value and a pointer to the next node. Initially, the next pointer is set to NULL.

ALGORITHM:

1> Start

2> Define Node class with:

* Public members:

val : stores node data

next : pointer to next node

* Constructor Node(int data) :

Assign val = data

Initialize next = NULL

3> In main function

* Create a Node object n with value 20

* Display n->val and n->next

4> End

# Add multiple nodes at the end of the Linked List:

This program demonstrates how to create a singly linked list and insert nodes at the end. Each node contains a value and a pointer to the next node. The list can be traversed to display all elements.

ALGORITHM:

1> Start

2> Define Node class with:

* Public members:

  * val : stores node data

  * next : pointer to next node

* Constructor Node(int data) :

  * Assign val = data

  * Initialize next = NULL

3> Define LinkedList class with:

* Public member head : pointer to the first node

* Constructor initializes head = NULL

* Method insertAtEnd(data) :

   * Create a new node with given data

   * If head is NULL, set head = newNode

   * Else, traverse to the last node and set its next = newNode

4> In main function

* Create LinkedList object list

* Insert elements 10, 20, 30, 40 at the end

* Display the linked list

5> End

# Add multiple nodes at the start of the Linked List:

This program demonstrates how to create a singly linked list and insert nodes at the beginning of the list. Each node contains a value and a pointer to the next node. The list can be traversed to display all elements.

ALGORITHM:

1> Start

2> Define Link (Node) class with:

3> Define insert_head function

* Create a new node with given data

* Set new node’s next pointer to current head

* Update head to point to new node

4> Define disp function

* Traverse from head to end

* Print each node’s data followed by ->

* End with NULL

5> In main function

* Initialize head = NULL

6> End


# Conclusion:

Linked lists in C++ provide a flexible way to store and manage data dynamically. They allow efficient insertion and deletion compared to arrays, though at the cost of extra memory for pointers and sequential access. Overall, they are a powerful foundation for implementing advanced data structures.
