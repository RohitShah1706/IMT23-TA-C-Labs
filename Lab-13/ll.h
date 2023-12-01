
#include <stdio.h>
#include <stdlib.h>

// prototypes / definitions for the functions implemented in ll.c
typedef struct node Node;
struct node {
	int val;
	Node * next;
};

// operations that print the linked list or find some linked list properties
#define emptyLL(head) (!head)
Node * newNode();
int lengthLL(Node *head);
void printValLL(Node * head);
void printValReverseLL(Node * head);
int getValAtHeadLL(Node *head);
int getValAtTailLL(Node *head);
int getValAtPosLL(Node * head, int pos);

// functions to add and delete nodes in a LL
Node * addNodeToHeadLL(Node * head, Node *new);
Node * addNodeToTailLL(Node * head, Node *new);
Node * addNodeToPosLL(Node * head, int pos, Node *new);
Node * deleteNodeAtPosFromLL(Node * head, int pos);
Node * deleteMatchingNodesFromLL(Node * head, int val);

// Some other LL operations
Node * reverseLL(Node * head);
Node * joinLL(Node *head1, Node *head2);
int freeUpLL(Node * head);


// Description of these functions
/*
Note that an empty linked list has head as NULL

Useful loop-1
Node *l;
for(l=head ;    l!=NULL ;    l = l->next)

# operations that print and find some linked list properties
1. Write a macro (using #define) called emptLL(H), this macro simply gives the logical true value if and only if the list is empty.  
	#define emptyLL(head) (!head)

2. Write a function Node * newNode();
    It mallocs a new Node and returns the pointer to it.
	return malloc(sizeof(Node));

3. Write the function int lengthLL(Node *head);
	It returns the number of Nodes in the linked list.
	If head is NULL it returns 0.
HINT: Based on loop-1, just set a counter and increment the counter.

4. Write a function void printValLL(Node * head);
	If head is NULL it does nothing
	Else it prints the val field of each node  in the linked list in order.
HINT: Based on loop-1, just print the val in the loop body.

5. Write a function  void printValReverseLL(Node * head);
	If head is NULL it does nothing
	Else it prints the reverse of the remaining list (pointed to by head->next) (recurively), then prints the current head->val.


#getting values from a linked list.

1. Write a function int getValAtHeadLL(Node *head);
	If the list  is empty it prints an error message and returns the value 0.
	Otherwize it returns the val field of the begining node of the linked list.

2. Write a function int getValAtTailLL(Node *head);
	If the list is empty it prints an error message and returns the value 0.
	Otherwise it returns the val field of the last node of the linked list.
HINT: use loop-1, but maintain a pointer to the previous node.


3. Write a function int getValAtPosLL(Node * head, int pos);
    Assume Node positions are counted starting with the node pointed to by head as position 0.
	This function returns the val field of the Node at position pos.
	if the pos is invalid it returns NULL.
HINT: use loop-1 but maintain variable i, say, to be the position of l.


#functions to add and delete nodes in a LL
1. Write a function Node * addNodeToHeadLL(Node * head, Node *new);
	It inserts the new Node at the beginning of the linked list.
	Note, the linked list from head could be empty.
	RETURN values is head of the resulting linked list.


2. Write a function Node * addNodeToTailLL(Node * head, Node *new);
	It inserts the new Node at the end of the linked list.
	Note, the linked list from head could be empty.
	RETURN values is head of the resulting linked list.

3. Write a function Node * addNodeToPosLL(Node * head, int pos, Node *new);
	Inserts the Node new into the position pos in the linked list.
	If pos is 0 or smaller it inserts at the head, if it is larger than the last valid position it inserts at the tail.
	RETURN values is head of the resulting linked list.

4. Write a function Node * deleteNodeAtPosFromLL(Node * head, int pos);
	This finds the node at position pos and deletes it from the linked list.
	The deleted node is freed up.
	If pos is 0 or smaller it deletes the node at the head, if it is larger than the last valid position it deletes the node at the tail.
	RETURN values is head of the resulting linked list.
5.  Write a function Node * deleteMatchingNodesFromLL(Node * head, int val);
	This finds all occurrences of nodes with  given   val  in their val fields and deltes those nodes form the linked list, and frees them up);
	RETURN value is head of the resulting linked list.


# Some other LL operations
1. Write a function Node * reverseLL(Node * head);
	If the head is NULL it returns NULL
	otherwise it reverses the linked list and returns the new head (which was originally the tail).
	To do this it creates a new empty linked list (lets call it's head as newhead) and keeps adding elements starting from the original lists head one by one and putting those nodes into the beginning of newhead.

2. Write a function Node * joinLL(Node *head1, Node *head2);
	It makes a single list with all the elements of head1's list followed by the elements of head2's list.

3. Write a function int freeUpLL(Node * head);
	It calls free() to free up each node in the linked list. It returns the number of nodes it freed up
*/

