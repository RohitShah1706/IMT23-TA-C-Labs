#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in a linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to detect a cycle in a linked list
int hasCycle(struct Node *head) {
    // Initialize slow and fast pointers to the head of the list
    struct Node *slow = head;
    struct Node *fast = head;

    // Traverse the list until the fast pointer reaches the end
    while (fast != NULL && fast->next != NULL) {
        // Move the slow pointer one step at a time
        slow = slow->next;
        // Move the fast pointer two steps at a time
        fast = fast->next->next;

        // If there's a cycle, the slow and fast pointers will meet
        if (slow == fast) {
            return 1; // Cycle detected
        }
    }

    return 0; // No cycle detected
}

// Function to create a new node with the given data
struct Node *newNode(int data) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    if (node == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to print the linked list
void printList(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating a sample linked list with a cycle
    struct Node *root = newNode(1);
    struct Node node2 = {2, NULL};
    struct Node node3 = {3, NULL};
    struct Node node4 = {4, NULL};
    struct Node node5 = {5, NULL};
    struct Node node6 = {6, NULL};
    root->next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    node5.next = &node6;
    node6.next = &node3;
    printList(root);



    // node4.next = &node2;

    // head->next = newNode(2);
    // head->next->next = newNode(3);
    // head->next->next->next = newNode(4);
    // head->next->next->next->next = head->next; // Creating a cycle










    // // Check if the linked list has a cycle
    // if (hasCycle(head)) {
    //     printf("Linked list has a cycle\n");
    // } else {
    //     printf("Linked list does not have a cycle\n");
    // }

    // // Print the linked list
    // printf("Linked list: ");

    return 0;
}
