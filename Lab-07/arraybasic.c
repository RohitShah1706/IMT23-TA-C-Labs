/*
Write a function to receiv an array and an integer as parameters and read that many integers into that array.
Write a function to recive an array and an  integer as parameters and sum those integers in the array and return the sum.
Write a main function combining the above two to read an array, compute the sum and print the sum value.
*/

#include <stdio.h>

void read_array(int arr[], int n) {
    printf("Enter %d space separated integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

int sum_array(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    read_array(arr, n);
    int sum = sum_array(arr, n);
    printf("The sum of the array is %d\n", sum);
    return 0;
}