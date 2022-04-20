#include<stdio.h>
#define N 50
int cir_queue[N];
int front = -1;
int back= -1;
int E;

void cir_enqueue(int arr[],int element)
{
if(back + 1 % N ==front){
    printf("The circular queue is full!\n");
}
else
    back=(back+1)%N;
	cir_queue[back]=N;
if(front==-1)
    front=0;

}

void cir_dequeue(int arr[]){
if(front == -1 && back == -1)
    printf("The circular queue is empty!!\n");
else
E=cir_queue[front];
	front=(front+1)%N;
if(front==back)
	        front=back=-1;


}

int main(){

cir_enqueue(cir_queue,3);
}
