#include<stdio.h>

int print2dArray1(int n, int m, int arr[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}

int print2dArray2(int n, int m, int arr[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}


int main()
{
    int arr2d[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    print2dArray1(3, 3, arr2d);
    printf("\n\n");
    print2dArray2(3, 3, arr2d);

    
}