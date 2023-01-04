#include <stdio.h>
typedef struct node *node_ptr;
struct node
{
    int data;
    node_ptr next;
};
typedef node_ptr list;
typedef node_ptr position;

position findPosition(int n, list L)
{
    position p;
    p = L->next;
    while (p->next != NULL && p->data != n)
    {
        p = p->next;
    }
    return p;
}
position find_previous(int n, list L)
{
    position p;
    p = L;
    while ((p->next != NULL) && (p->next->data != n))
        p = p->next;
    return p;
}

void deleteLink(int n, list L)
{
    position p, tmp_cell;
    p = find_previous(n, L);
    if (p->next != NULL)
    {
        tmp_cell = p->next;
        p->next = tmp_cell->next;
        free(tmp_cell);
    }
}
void insert(int n, list L, position p)
{
    position tmp_cell;
    tmp_cell = (position)malloc(sizeof(struct node));
    if (tmp_cell == NULL)
        fatal_error("Out of space!!!");
    else
    {
        tmp_cell->data = n;
        tmp_cell->next = p->next;
        p->next = tmp_cell;
    }
}

void deleteList(list L)
{
    position p, temp;
    p = L->next;
    L->next = NULL;
    while (p->next != NULL)
    {
        temp = p->next;
        free(p);
        p = temp;
    }
}

void main()
{
}