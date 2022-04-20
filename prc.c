#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void linkedListTraversal(struct node * ptr)
{
    while(ptr != NULL)
        {
            printf("Element is %d \n",ptr ->data);
            ptr = ptr ->next;
        }
}

struct node * insertAtFirst(struct node * head,int data)
{
        struct node * ptr = (struct node *)malloc(sizeof(struct node));
        ptr -> data = data;
        ptr -> next = head;
        return ptr;
}

struct node * insertAtEnd(struct node * head, int data)
{
    struct node * p = head;

    struct node * ptr = (struct node *)malloc(sizeof(struct node));
     ptr -> data = data;
        while(p->next!=NULL)
            {
                p = p->next;
            }

        p-> next = ptr;
        ptr ->next =NULL;
        return head ;
}

struct node * insertAtIndex(struct node * head, int data, int index)
{
 struct node * p = head;
 struct node * ptr = (struct node *)malloc(sizeof(struct node));

  int i = 0;
        while(i!=index -1)
        {
            p = p ->next;
            i++;
        }
        ptr -> data = data;
        ptr ->next = p ->next ;
        p -> next = ptr;
    return head;
}

struct node * deleteFirstNode(struct node * head)
{
    struct node * ptr = head;
    head = head ->next;
    free(ptr);
return head;
}

struct node * delBetween(struct node * head,int index)
{
    struct node * p = head;
     struct node * q = head ->next;
    int i = 0;
    for(i; i<index-1;i++)
    {
        p = p -> next;
        q = q -> next;
    }
    p -> next = q ->next;
    free(q);
    return head;
}
struct node * delAtEnd(struct node * head)
{
  struct node * p = head ;
  struct node * q = head ->next ;
    while(q->next!=NULL)
    {
        q = q ->next;
        p = p ->next;
        if(q ->next == NULL)
            p ->next = NULL;
        free(q);
    }

return head;
}

struct node * delByVal(struct node * head , int value)
{
        struct node * p = head;
        struct node * q = head ->next;

        while(q->data!= value && q ->next != NULL )
        {
            p = p ->next;
            q = q -> next;
        }
    if(q ->data == value)
    {
        p ->next = q ->next;
        free(q);
    }
    return head;
}

int main()
{
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    struct node * forth = (struct node *)malloc(sizeof(struct node));
    struct node * fifth = (struct node *)malloc(sizeof(struct node));

    head -> data = 9;
    head -> next = second;

    second -> data = 9;
    second -> next = third;

    third -> data = 9;
    third -> next = forth;

    fifth -> data = 9;
    fifth -> next = NULL;

    forth-> data = 9;
    forth -> next = fifth;
     printf("\nBefore Inserting at first\n");
    linkedListTraversal(head);
    printf("\n\nInsert at first\n");
    head = insertAtEnd(head,67);
    linkedListTraversal(head);

    printf("\n\nInsert at Index\n");
     head = insertAtIndex(head,105,2);
    linkedListTraversal(head);

      printf("\n\nDelete at first\n");
      head = deleteFirstNode(head);
      linkedListTraversal(head);

         printf("\n\nDelete at between\n");
      head = delBetween(head,2);
      linkedListTraversal(head);

     printf("\n\nDelete at END\n");
      head = delAtEnd(head);
      linkedListTraversal(head);

      printf("\n\nDelete By Value\n");
      head = delByVal(head,9);
      linkedListTraversal(head);
    return 0;
}
