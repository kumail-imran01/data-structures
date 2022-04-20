#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * prev;
    struct node * next;
};

void frontDoublyTraversal(struct node * head)
{
    struct node * ptr = head;
    while(ptr-> next !=NULL)
    {
        printf("Element is %d\n ",ptr->data);
        ptr = ptr ->next;
    }
     printf("Element is %d\n ",ptr->data);
}

void backDoublyTraversal(struct node * head)
{
    struct node * ptr ;
    ptr ->next = NULL;
    while(ptr-> prev !=NULL)
    {
        printf("Element is %d\n ",ptr->data);
        ptr = ptr ->prev;
    }
     printf("Element is %d\n ",ptr->data);
}

int main()
{
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * N2 = (struct node *)malloc(sizeof(struct node));
    struct node * N3 = (struct node *)malloc(sizeof(struct node));
    struct node * N4 =(struct node *)malloc(sizeof(struct node));

    head -> prev = NULL;
    head -> next = N2;
    head -> data = 4;

    N2 -> prev = head;
    N2 -> next = N3;
    N2 -> data = 5;

    N3 -> prev = N2;
    N3 -> next = N4;
    N3 -> data = 6;

    N4 -> prev = N3;
    N4 -> next = NULL;
    N4 -> data = 9;

    printf("\n\n Front Traversal\n");
    frontDoublyTraversal(head);
    printf("\n\n Back Traversal\n");
    backDoublyTraversal(head);
    return 0;
}
