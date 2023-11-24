#include <stdio.h>
#include <string.h>

struct person {
    char name[30];    // a string for the person's name
    int rollno;       // an integer roll number
};

typedef struct person Student;   // now we can use Student as a synonym for struct person

int main() {
    Student s[10];

    // Read the number of students
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Read information for n students
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll number: ");
        scanf("%d", &s[i].rollno);
    }

    // Print information for all students
    printf("\nInformation for all students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].rollno);
    }

    // Find student with maximum roll number
    int maxRollNoIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].rollno > s[maxRollNoIndex].rollno) {
            maxRollNoIndex = i;
        }
    }
    printf("\nStudent with maximum roll number:\n");
    printf("Name: %s\n", s[maxRollNoIndex].name);
    printf("Roll number: %d\n", s[maxRollNoIndex].rollno);

    // Compare names of two students using strcmp
    int i, j;
    printf("\nEnter two indices (i and j) to compare names: ");
    scanf("%d %d", &i, &j);
    int result = strcmp(s[i].name, s[j].name);
    printf("Comparison result: %d\n", result);

    // Swap students at indices i and j
    printf("\nSwapping students at indices %d and %d:\n", i, j);
    Student temp = s[i];
    s[i] = s[j];
    s[j] = temp;

    // Declare and initialize pointers p and q
    Student *p, *q;
    printf("\nEnter two indices (i and j) to make p and q point to s[i] and s[j]: ");
    scanf("%d %d", &i, &j);
    p = &s[i];
    q = &s[j];

    // Swap students using pointers p and q
    printf("Swapping students using pointers p and q:\n");
    temp = *p;
    *p = *q;
    *q = temp;

    // Swap pointers p and q
    printf("Swapping pointers p and q:\n");
    Student *tempPtr = p;
    p = q;
    q = tempPtr;
    printf("Contents of structures pointed to by p and q:\n");
    printf("p: Name - %s, Roll number - %d\n", p->name, p->rollno);
    printf("q: Name - %s, Roll number - %d\n", q->name, q->rollno);

    // Print students using pointer p
    printf("\nPrinting students using pointer p:\n");
    for (p = s; p < s + n; p++) {
        printf("Name: %s\n", p->name);
        printf("Roll number: %d\n", p->rollno);
    }

    return 0;
}
