#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int *a, int n)
{
    int sorted = 0;
    int i, j, last = n - 1;

    for (i = 0; (i < last) && sorted == 0; i++)
    {
        sorted = 1;
        for (j = last; j > i; j--)
            if (a[j - 1] > a[j])
            {
                swap(&a[j], &a[j - 1]);
                sorted = 0; // signal exchange
                // printf("\n");
                // for (int k = 0; k < n; k++)
                // {
                //     printf("%d ", a[k]);
                // }
            }
    }
}

void main()
{
    int array[] = {20, 8, 31, 14, 2, 21, 22, 44, 23, 15, 12, 13, 12, 1, 9};
    int n = 15, i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    bubbleSort(array, n);
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}