#include <stdio.h>

void main()
{
    int num = 5;
    int *p = &num;
    int *d = &*p;

    printf("\n%d", num);
    printf("\n%p", &num);
    printf("\n%p", p);
    printf("\n%d", *p);
    printf("\n%d", d);
}