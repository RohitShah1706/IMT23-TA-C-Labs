## Problem Statement:

You are tasked with creating a program to manage a list of students and the items they own. Each student can own multiple items, such as books or laptops. The program should allow the user to input the items for each student and then display the list of students along with their respective items.

To solve this problem, you will need to define several data structures using C structs. Here are the relevant structs:

```c
struct Book {
    char title[50];
    int pages;
};

struct Laptop {
    char brand[50];
    int price;
};

struct Item {
    // Stores the type of the item, which can be either "book" or "laptop"
    char type[10];   

    // Stores a pointer to the item data. The actual data can be a struct Book or struct Laptop, depending on the item type
    void* data;      
};

struct Student {
    char name[100];            
    struct Item itemList[10]; 

    // will be used to keep track of the number of items in the itemList array - this can be used to iterate over the itemList array 
    int numItems;
};
```

The program should have the following functionality:

1. Initialize an array of struct Student with a fixed number of students (eg some n >= 5). Hardcode the student names (eg "John", "Mary", "Bob", "Alice", "Jane") etc.
2. Then ask the user to provide an index between 0 & n - 1 to select a student. Scan item type, and item details (such as book title, number of pages, laptop brand, and price).
3. Store the items in the itemList of that student, up to a maximum of 10 items per student.
4. Exit the program when the user enters -1 for the student index.
5. Display the list of students and their respective items, including the item type and details.
