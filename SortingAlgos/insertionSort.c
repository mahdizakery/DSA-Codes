#include <stdio.h>
// run comments to see each step of insertion sort

void insertionSort(int arr[], int n)
{
    int i, j, tmp, k;
    for (i = 1; i < n; i++)
    {
        tmp = arr[i];
        for (j = i; j > 0 && arr[j - 1] > tmp; j--)
        {
            arr[j] = arr[j - 1];
            // for (k = 0; k < n; k++)
            // {
            //     printf("%d ", arr[k]);
            // }
            // printf("\n");
        }
        arr[j] = tmp;
        // for (k = 0; k < n; k++)
        // {
        //     printf("%d ", arr[k]);
        // }
        // printf("\n");
    }
}

void main()
{
    int array[] = {20, 8, 31, 14, 2, 21};
    int n = 6, i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    insertionSort(array, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}