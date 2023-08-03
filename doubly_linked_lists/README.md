# Doubly Linked Lists in C

A doubly linked list is a data structure that consists of a sequence of elements, each of which contains a reference to both its previous and next elements. This bidirectional linkage allows for efficient traversal in both directions and enables various operations such as insertion, deletion, and modification of elements within the list.

## Table of Contents

- [Introduction](#introduction)
- [Advantages of Doubly Linked Lists](#advantages-of-doubly-linked-lists)
- [Basic Operations](#basic-operations)
- [Traversal](#traversal)
- [Insertion and Deletion](#insertion-and-deletion)
- [Use Cases](#use-cases)
- [Resources](#resources)

## Introduction

A doubly linked list is composed of nodes, where each node holds data and two pointers - one pointing to the previous node and another pointing to the next node in the sequence. This double linkage allows for efficient traversal both forwards and backwards through the list.

## Advantages of Doubly Linked Lists

- **Bidirectional Traversal**: Unlike singly linked lists, doubly linked lists can be traversed in both directions.
- **Insertions and Deletions**: Inserting or deleting a node from a doubly linked list can be more efficient compared to a singly linked list, especially when the position is known.
- **Reverse Traversal**: Doubly linked lists allow for easy traversal in reverse order, which is particularly useful in certain scenarios.

## Basic Operations

- **Initialization**: Initialize an empty doubly linked list with appropriate data structures.
- **Insertion**: Add a new node to the list at the beginning, end, or at a specific position.
- **Deletion**: Remove a node from the list while maintaining the linkage.
- **Search**: Find a node with a specific value or meet certain criteria.
- **Traversal**: Iterate through the list in both forward and backward directions.

## Traversal

Traversal through a doubly linked list can be done in two directions: forward and backward. The following is an example of how to traverse a doubly linked list in C:

```c
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void traverseForward(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        // Process current node
        current = current->next;
    }
}

void traverseBackward(struct Node* tail) {
    struct Node* current = tail;
    while (current != NULL) {
        // Process current node
        current = current->prev;
    }
}
