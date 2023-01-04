#include <stdio.h>

void shellSort(int arr[], int n)
{
    int i, j, tmp, k, f;
    for (i = n / 2; i > 0; i /= 2)
    {
        for (j = i; j < n; j++)
        {
            tmp = arr[j];
            for (k = j; k >= i && arr[k - i] > tmp; k -= i)
            {
                arr[k] = arr[k - i];
            }
            arr[k] = tmp;
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
    shellSort(array, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}