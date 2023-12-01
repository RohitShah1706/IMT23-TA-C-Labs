#include "ll.h"

Node *newNode() {
	return malloc(sizeof(Node));
}

int lengthLL(Node *head) {
    int count = 0;
    Node *current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

/*
4. Write a function void printValLL(Node * head);
	If head is NULL, it does nothing.
	Else it prints the val field of each node in the linked list in order.
*/
void printValLL(Node *head) {
    if (head == NULL) {
        printf("Empty Linked List\n");
        return;
    }

    Node *current = head;
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}

/*
5. Write a function  void printValReverseLL(Node * head);
	If head is NULL, it does nothing.
	Else it prints the reverse of the remaining list (pointed to by head->next) (recursively),
	then prints the current head->val.
*/
void printValReverseLL(Node *head) {
    if (head == NULL) {
        return;
    }

    printValReverseLL(head->next);
    printf("%d ", head->val);
}

/*
# getting values from a linked list.

1. Write a function int getValAtHeadLL(Node *head);
	If the list is empty, it prints an error message and returns the value 0.
	Otherwise, it returns the val field of the beginning node of the linked list.
*/
int getValAtHeadLL(Node *head) {
    if (emptyLL(head)) {
        printf("Error: Linked List is empty\n");
        return 0;
    }

    return head->val;
}

/*
2. Write a function int getValAtTailLL(Node *head);
	If the list is empty, it prints an error message and returns the value 0.
	Otherwise, it returns the val field of the last node of the linked list.
*/
int getValAtTailLL(Node *head) {
    if (emptyLL(head)) {
        printf("Error: Linked List is empty\n");
        return 0;
    }

    Node *current = head;
    Node *prev = NULL;

    while (current != NULL) {
        prev = current;
        current = current->next;
    }

    return prev->val;
}

/*
3. Write a function int getValAtPosLL(Node * head, int pos);
    Assume Node positions are counted starting with the node pointed to by head as position 0.
	This function returns the val field of the Node at position pos.
	If the pos is invalid, it returns 0.
*/
int getValAtPosLL(Node *head, int pos) {
    if (emptyLL(head)) {
        printf("Error: Linked List is empty\n");
        return 0;
    }

    Node *current = head;
    int i = 0;

    while (current != NULL && i < pos) {
        current = current->next;
        i++;
    }

    if (current == NULL) {
        printf("Error: Invalid position\n");
        return 0;
    }

    return current->val;
}

/*
# functions to add and delete nodes in an LL

1. Write a function Node * addNodeToHeadLL(Node * head, Node *new);
	It inserts the new Node at the beginning of the linked list.
	Note, the linked list from head could be empty.
	RETURN values are the head of the resulting linked list.
*/
Node * addNodeToHeadLL(Node *head, Node *new) {
    new->next = head;
    return new;
}

/*
2. Write a function Node * addNodeToTailLL(Node * head, Node *new);
	It inserts the new Node at the end of the linked list.
	Note, the linked list from head could be empty.
	RETURN values are the head of the resulting linked list.
*/
Node * addNodeToTailLL(Node *head, Node *new) {
    if (emptyLL(head)) {
        return new;
    }

    Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = new;
    return head;
}

/*
3. Write a function Node * addNodeToPosLL(Node * head, int pos, Node *new);
	Inserts the Node new into the position pos in the linked list.
	If pos is 0 or smaller, it inserts at the head;
	if it is larger than the last valid position, it inserts at the tail.
	RETURN values are the head of the resulting linked list.
*/
Node * addNodeToPosLL(Node *head, int pos, Node *new) {
    if (pos <= 0) {
        new->next = head;
        return new;
    }

    Node *current = head;
    int i = 0;

    while (current != NULL && i < pos - 1) {
        current = current->next;
        i++;
    }

    if (current == NULL) {
        // Insert at the tail
        return addNodeToTailLL(head, new);
    }

    new->next = current->next;
    current->next = new;
    return head;
}

/*
4. Write a function Node * deleteNodeAtPosFromLL(Node * head, int pos);
	This finds the node at position pos and deletes it from the linked list.
	The deleted node is freed up.
	If pos is 0 or smaller, it deletes the node at the head;
	if it is larger than the last valid position, it deletes the node at the tail.
	RETURN values are the head of the resulting linked list.
*/
Node * deleteNodeAtPosFromLL(Node * head, int pos) {
    if (emptyLL(head)) {
        printf("Error: Linked List is empty\n");
        return NULL;
    }

    if (pos <= 0) {
        Node *newHead = head->next;
        free(head);
        return newHead;
    }

    Node *current = head;
    Node *prev = NULL;
    int i = 0;

    while (current != NULL && i < pos) {
        prev = current;
        current = current->next;
        i++;
    }

    if (current == NULL) {
        printf("Error: Invalid position\n");
        return head;
    }

    prev->next = current->next;
    free(current);
    return head;
}

/*
5.  Write a function Node * deleteMatchingNodesFromLL(Node * head, int val);
	This finds all occurrences of nodes with given val in their val fields,
	deletes those nodes from the linked list, and frees them up.
	RETURN value is the head of the resulting linked list.
*/
Node * deleteMatchingNodesFromLL(Node * head, int val) {
    if (emptyLL(head)) {
        printf("Error: Linked List is empty\n");
        return NULL;
    }

    Node *current = head;
    Node *prev = NULL;

    while (current != NULL) {
        if (current->val == val) {
            if (prev == NULL) {
                // Deleting the head node
                head = current->next;
                free(current);
                current = head;
            } else {
                prev->next = current->next;
                free(current);
                current = prev->next;
            }
        } else {
            prev = current;
            current = current->next;
        }
    }

    return head;
}

/*
# Some other LL operations

1. Write a function Node * reverseLL(Node * head);
	If the head is NULL, it returns NULL;
	otherwise, it reverses the linked list and returns the new head (which was originally the tail).
	To do this, it creates a new empty linked list (let's call its head newhead)
	and keeps adding elements starting from the original list's head one by one,
	putting those nodes into the beginning of newhead.
*/
// Node * reverseLL(Node * head) {
//     Node *newHead = NULL;
//     Node *current = head;

//     while (current != NULL) {
//         Node *temp = current->next;
//         current->next = newHead;
//         newHead = current;
//         current = temp;
//     }

//     return newHead;
// }
Node* reverseLL(Node* head) {
    // Base case: if the list is empty or has only one node
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Reverse the rest of the list recursively
    Node* rest = reverseLL(head->next);

    // Change the next pointer of the current node to point to its previous node
    head->next->next = head;
    head->next = NULL;

    // Return the new head of the reversed list
    return rest;
}

/*
2. Write a function Node * joinLL(Node *head1, Node *head2);
	It makes a single list with all the elements of head1's list followed by the elements of head2's list.
*/
Node * joinLL(Node *head1, Node *head2) {
    if (emptyLL(head1)) {
        return head2;
    }

    Node *current = head1;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = head2;
    return head1;
}

/*
3. Write a function int freeUpLL(Node * head);
	It calls free() to free up each node in the linked list.
	It returns the number of nodes it freed up.
*/
int freeUpLL(Node * head) {
    int count = 0;

    while (head != NULL) {
        Node *temp = head;
        head = head->next;
        free(temp);
        count++;
    }

    return count;
}
