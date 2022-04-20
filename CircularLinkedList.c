#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node * next;
};

struct node * insertAtEnd(struct node * head, int data)
{
    struct node * p = head ->next;
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = data;

        while(p ->next != head){
            p = p->next;
        }
    p ->next = ptr;
     ptr ->next = head  ;
    return head;
}

struct node * insertAtFirst(struct node * head, int data)
{
        struct node * p = head;
        struct node * ptr = (struct node *)malloc(sizeof(struct node));
        ptr -> data = data;
        p = p -> next;
        while(p ->next != head)
        {
            p = p -> next;
        }
         p -> next = ptr;
          ptr ->next = head ;
          head = ptr;
        return head;

}
void linkedListTraversal(struct node * head)
{
    struct node * ptr = head;
        do
        {
            printf("Element is %d\n ",ptr ->data);
            ptr = ptr ->next;
        }while(ptr ->next!=head);

    printf("Element is %d\n ",ptr ->data);
}
 struct node * deleteFirstNode(struct node * head)
 {
     struct node * p = head;
    head = head ->next ;
     free(p);
    return head;
 }
int main()
{
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    struct node * forth = (struct node *)malloc(sizeof(struct node));

    head -> data = 3;
    head -> next = second;

    second -> data = 67;
    second -> next = third;

    third -> data = 90;
    third -> next = forth;

    forth -> data = 89;
    forth -> next = head;

    linkedListTraversal(head);
    printf("\n\n INSERT AT FIRST \n");
    head = insertAtFirst(head, 78);
    linkedListTraversal(head);

     printf("\n\n INSERT AT END \n");
    head = insertAtEnd(head, 890);
    linkedListTraversal(head);

      printf("\n\n DELETE AT START \n");
    head = deleteFirstNode(head);
    linkedListTraversal(head);

    return 0;
}
