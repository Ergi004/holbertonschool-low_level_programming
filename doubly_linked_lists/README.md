Doubly Linked List
A doubly linked list is a data structure that consists of a sequence of elements called nodes, where each node contains two pointers, one pointing to the previous node and the other to the next node. This structure allows traversal in both directions, forward and backward, making it a powerful data structure for various applications.

Features
Allows traversal in both directions (forward and backward).
Efficient insertion and deletion at any position.
Dynamic size, as memory is allocated for each node separately.
Suitable for situations where the size of the data structure is not fixed.
Implementation
To implement a doubly linked list, we use a structure for the nodes, which holds the data and pointers to the next and previous nodes. The DoublyLinkedList structure maintains pointers to the head and tail nodes and the size of the linked list.

Usage
To use the doubly linked list, you can perform the following operations:

Insertion: Insert elements at the beginning, end, or any given position.
Deletion: Remove elements from the list.
Traversal: Traverse the list in either forward or backward direction.
Access: Access elements by their index or value.
Time Complexity
The time complexity of common operations on a doubly linked list are as follows:

Accessing an element by index: O(n)
Insertion/Deletion at the beginning: O(1)
Insertion/Deletion at the end: O(1) when tail is accessible in O(1), otherwise O(n)
Insertion/Deletion at a given position: O(n)
Traversal: O(n)
Space Complexity
The space complexity of a doubly linked list is O(n), where n is the number of elements in the list. Each element requires memory for the data and two pointers (next and prev).

Contributing
Contributions to this doubly linked list implementation or any improvements are welcome. Feel free to open issues or submit pull requests.

License
This project is licensed under the MIT License - see the LICENSE file for details.
