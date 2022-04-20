#include<stdio.h>
#define N 50
int queue[N];
int front = -1;
int back= -1;
int E;
void enqueue(int arr[],int item){

if(back + 1 == N)
    printf("Queue overflow ! \n");
else
{
 back = back + 1;
 queue [back]= item;
}
if(front == -1)
		front=0;

}

void dequeue(int arr[]){

if(front == -1 && back == -1)
{
    printf("Queue Underflow!");
}
else
	E = queue[front];
if(front == back ) //this is last item
		front=-1, back=-1;

	else //there are more items
		front=front+1;
}
void displayQueue(int arr[]){

for(int i = front;i<=back;i++)
    printf(" The elements in the queue are : %d\n",queue[front]);

printf("\n");

}
void DisplayFront(int arr[]){

printf("The element at the front of the queue is : %d \n",queue[front]);


}

void menu(){
    int choice,num;
    printf("------------------Welcome to the  Queues-------------------\n------------Menu-----------\n1.Enqueue\n2.Dequeue\n3.Display Queue\n4.Display Front\n5.Exit\nEnter your choice\n");
    scanf("%d",&choice);

    switch(choice){

case 1:
    {
        printf("Enter the element you want to insert in queue : \n");
        scanf("%d",&num);
        enqueue(queue,num);
        menu();
        break;
    }
case 2:
    {
    dequeue(queue);
    printf("Element dequeued Successfully !\n");
    menu();
    break;
    }
case 3:
    {
    displayQueue(queue);
    menu();
    break;
    }
case 4:
    {
    DisplayFront(queue);
    menu();
    break;
    }
case 5:
    {

    printf("---------------------------The program exitted successfully -----------\n");
    break;
    }
default:{
printf("-----------Invalid choice-----\n");
menu();
break;
    }


    }



}
int main(){

menu();
return 0;
}


