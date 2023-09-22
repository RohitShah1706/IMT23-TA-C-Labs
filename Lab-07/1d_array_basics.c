#include<stdio.h>

// int total1(int *arr, int n) {
//     int total = 0;
//     for (int i = 0; i < n; i++)
//     {
//         total += arr[i];
//     }
//     return total;
// }

int total2(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    arr[0] = -1;
    return total;
}


int main()
{
    int n;
    scanf("%d", &n);
    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printf("%d\n", total1(arr, n));
    printf("%d\n", total2(arr, n));
    printf("%d\n", total2(arr, n));
    // printf("Common mistake while finding size of array n: %ld\n", sizeof(arr)/sizeof(arr[0]));

    
}