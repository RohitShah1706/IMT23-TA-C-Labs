#include <stdio.h>

// Define the structure for a person
struct person
{
    int rollno; // an integer roll number
    struct person *next;
};

// Rename the structure for a person to Student
typedef struct person Student;

void printRollNumbers(Student *start)
{
    printf("Roll numbers in function: ");
    Student *p;
    for (p = start; p != NULL; p = p->next)
    {
        printf("%d ", p->rollno);
    }
    printf("\n");
}

int main()
{
    // Step 1: Declare an array of 10 Students called a.
    Student a[10];

    // Step 2: Set a[i]'s roll number and a[i].next
    for (int i = 0; i < 10; i++)
    {
        a[i].rollno = 100 + i;
        a[i].next = &a[(i + 3) % 10];
    }

    // Exception: a[7].next must be set to NULL.
    a[7].next = NULL;

    // Step 3: Declare a pointer p.
    Student *p;

    // Step 4: Do the following steps in a loop:
    while (1)
    {
        // Read an integer i in the range 0..9 from the user.
        int i;
        printf("Enter an integer in the range 0..9: ");
        scanf("%d", &i);

        // Check the range and break out of the loop if out of range.
        if (i < 0 || i > 9)
        {
            printf("Out of range. Exiting.\n");
            break;
        }

        // Set p to point to a[i].
        p = &a[i];

        // Step 5: Print the roll numbers using the print loop starting at a[i].
        printf("Roll numbers: ");
        // ! why p = p->next and not p = p + 1 (why can't use pointer arithmetic)
        for (; p != NULL; p = p->next)
        {
            printf("%d ", p->rollno);
        }
        printf("\n");
    }

    // Step 6: Declare another structure Student w.
    Student w;

    // Step 7: Make w's roll to be 999.
    w.rollno = 999;

    // Step 8: Make w's next to point to a[6].
    w.next = &a[6];

    // Step 9: Use the print loop with p initially set to point to w instead of a[i].
    printf("Roll numbers with p initially set to point to w: ");
    for (p = &w; p != NULL; p = p->next)
    {
        printf("%d ", p->rollno);
    }
    printf("\n");

    // Step 10: Make a[3]'s next to point to w.
    a[3].next = &w;

    // Step 11: Use the print loop with p initially set to point to a[0].
    printf("Roll numbers after updating a[3]'s next: ");
    for (p = &a[0]; p != NULL; p = p->next)
    {
        printf("%d ", p->rollno);
    }
    printf("\n");

    // Step 12: What is your observation?

    // Step 13: Make a[8]'s next point to a[4].
    a[8].next = &a[4];

    // Step 14: Use the print loop with p initially set to point to a[0].
    printf("Roll numbers after updating a[8]'s next: ");
    for (p = &a[0]; p != NULL; p = p->next)
    {
        printf("%d ", p->rollno);
    }
    printf("\n");

    // Step 15: What is your observation now?

    // Step 16: Put the print loop into a function and call it appropriately.
    // Call the function with p initially set to point to a[0].
    printRollNumbers(&a[0]);

    return 0;
}
