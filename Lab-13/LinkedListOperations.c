// ll.h has all the prototypes and definitions. It also has some documentation.
#include "ll.h"

// Function to create a sample linked list from an array of nodes
Node *makeTestLLfromArray(Node a[]) {
    Node *p;
    int i;

    for (i = 0; i < 10; i++)
        a[i].val = 100 + i;

    for (i = 0; i < 10; i++)
        if (i == 7)
            a[i].next = NULL;
        else
            a[i].next = &a[(i + 3) % 10];

    for (p = &a[0]; p != NULL; p = p->next)
        printf("%d ", p->val);

    return a;
}

int main() {
    // Declare and initialize an array of nodes
    Node array[10];
    Node *head = makeTestLLfromArray(array);

    printf("\n");

    // Test functions from ll.h
    printf("Initial Linked List:\n");
    printValLL(head);

    printf("Reverse of Linked List:\n");
    printValReverseLL(head);
    printf("\n");

    printf("Value at Head: %d\n", getValAtHeadLL(head));
    printf("Value at Tail: %d\n", getValAtTailLL(head));
    printf("Value at Position 3: %d\n", getValAtPosLL(head, 3));

    // Add nodes
    Node *newNode1 = newNode();
    newNode1->val = 99;
    head = addNodeToHeadLL(head, newNode1);

    Node *newNode2 = newNode();
    newNode2->val = 88;
    head = addNodeToTailLL(head, newNode2);

    Node *newNode3 = newNode();
    newNode3->val = 77;
    head = addNodeToPosLL(head, 2, newNode3);

    printf("Linked List after adding nodes:\n");
    printValLL(head);

    // Delete nodes
    head = deleteNodeAtPosFromLL(head, 2);
    printf("Linked List after deleting node at position 2:\n");
    printValLL(head);

    head = deleteMatchingNodesFromLL(head, 77);
    printf("Linked List after deleting nodes with value 77:\n");
    printValLL(head);

    // Reverse and Join
    head = reverseLL(head);
    printf("Reversed Linked List:\n");
    printValLL(head);

    Node array2[10];
    Node *head2 = makeTestLLfromArray(array2);

    printf("\nLinked List 2:\n");
    printValLL(head2);

    Node *joinedHead = joinLL(head, head2);
    printf("Joined Linked List:\n");
    printValLL(joinedHead);

    // // Free up memory
    // int freedNodes = freeUpLL(joinedHead);
    // printf("Freed up %d nodes\n", freedNodes);

    // // Print the value of the pointer (an address)
    // printf("Pointer value after freeing: %p\n", (void *)joinedHead);

    return 0;
}
