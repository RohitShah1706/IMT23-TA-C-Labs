#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a person
struct person {
    char name[30];    // a string for the person's name
    int rollno;       // an integer roll number
};

// Rename the structure for a person to Student
typedef struct person Student;

// Function to allocate and read an array of n Student structures
Student *new_array(int n) {
    Student *arr = (Student *)malloc(n * sizeof(Student));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", arr[i].name);
        printf("Roll number: ");
        scanf("%d", &arr[i].rollno);
    }

    return arr;
}

// Function to print an array of n Student structures
void print_array(Student a[], int n) {
    printf("\nPrinting Student array:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", a[i].name);
        printf("Roll number: %d\n", a[i].rollno);
    }
}

// Function to perform bubble sort on an array of n Student structures based on roll numbers
void bubble_sort(Student a[], int n) {
    for (int h = n - 1; h > 0; h--) {
        for (int i = 0; i < h; i++) {
            if (a[i].rollno > a[i + 1].rollno) {
                // Swap the Student structures if needed
                Student temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}

// Function to free the memory allocated for an array of Student structures
void delete_array(Student a[]) {
    free(a);
}

int main() {
    Student *s;
    int n;

    // Read an integer n
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Call new_array() to create and read an array of n Students
    s = new_array(n);

    // Call print_array() to print the Student structures in the array s
    print_array(s, n);

    // Call bubble_sort() to sort the array of students s by their roll numbers
    bubble_sort(s, n);

    // Call print_array() to print the Student structures in the array s after sorting
    print_array(s, n);

    printf("\nValue of pointer s: %p\n", s);

    // Call delete_array() to delete the allocated array in s
    delete_array(s);

    // Print the value of the pointer s (an address)
    printf("\nValue of pointer s: %p\n", s);

    return 0;
}
