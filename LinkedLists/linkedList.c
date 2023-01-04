#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void main()
{
    /* Initialize nodes */
    node *head;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;
    /* Allocate memory */
    one = malloc(sizeof(node));
    two = malloc(sizeof(node));
    three = malloc(sizeof(node));

    /* Assign data values */
    one->data = 1;
    two->data = 2;
    three->data = 3;

    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = NULL;

    /* Save address of first node in head */
    head = one;

    /* Print list */
    node *temp = head;
    printf("\n\nList elements are - \n");
    while (temp != NULL)
    {
        printf("%d --->", temp->data);
        temp = temp->next;
    }

    /* Insert at the beginning */
    node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = 4;
    newNode->next = head;
    head = newNode;

    /* Insert at the end*/
    node *newNode2;
    newNode2 = malloc(sizeof(struct node));
    newNode2->data = 5;
    newNode2->next = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode2;

    /* Insert at middle */
    node *newNode3;
    newNode3 = malloc(sizeof(struct node));
    newNode3->data = 6;
    temp = head;
    int position = 2;
    for (int i = 2; i < position; i++)
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
    }
    newNode3->next = temp->next;
    temp->next = newNode3;
}
