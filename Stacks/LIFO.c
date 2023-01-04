#include <stdio.h>
#include <stdlib.h>

struct Node;
typedef struct Node *node_ptr;
typedef node_ptr Stack;
struct Node
{
    int data;
    node_ptr Next;
};

int is_empty(Stack S)
{
    return (S->Next == NULL);
}

Stack create_stack(void)
{
    Stack S;
    S = (Stack)malloc(sizeof(struct Node));
    if (S == NULL)
        printf("Out of space!!!");
    return S;
}

void push(int x, Stack S)
{
    node_ptr tmp_cell;
    tmp_cell = (node_ptr)malloc(sizeof(struct Node));
    if (tmp_cell == NULL)
        printf("Out of space!!!");
    else
    {
        tmp_cell->data = x;
        tmp_cell->Next = S->Next;
        S->Next = tmp_cell;
    }
}

int top(Stack S)
{
    if (is_empty(S))
        printf("Empty stack");
    else
        return S->Next->data;
}

void pop(Stack S)
{
    node_ptr first_cell;
    if (is_empty(S))
        printf("Empty stack");
    else
    {
        first_cell = S->Next;
        S->Next = S->Next->Next;
        free(first_cell);
    }
}
void main()
{
    Stack stack1 = create_stack();
    push(0, stack1);
    push(1, stack1);
    push(2, stack1);
    push(3, stack1);
}