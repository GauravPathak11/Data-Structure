#include<stdio.h>
#include<stdlib.h>
struct circularqueue{
   int rear;
   int front;
   int size;
   int*arr;
};
int isEmpty(struct circularqueue *q){
    if(q->rear==q->front){
        return 1;
    }
    return 0;
}
 
int isFull(struct circularqueue *q){
    if((q->rear+1)%q->size == q->front){
        return 1;
    }
    return 0;
}
void enqueue(struct circularqueue*q,int val)
{
    if((q->rear+1)%(q->size)==q->front)
    {
        printf("Queue is Overflow");
    }
    else
    {
       q->rear=(q->rear+1)%q->size;
       q->arr[q->rear]=val;
       printf("Enqueue : %d\n",val);
    }
}
int dequeue(struct circularqueue*q)
{
    int a=-1;
    if(q->rear==q->front)
    {
        printf("Underflow Condition");
    }
    else
    {
        q->front=(q->front+1)%q->size;
        a=q->arr[q->front];
    }
    return a;
}
int main()
{
    struct circularqueue q;
    q.size=4;
    q.front=q.rear=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
   
    enqueue(&q,14);
    enqueue(&q,28);
    enqueue(&q,42);
    printf("dequeuing the  element :%d\n",dequeue(&q));
    printf("dequeuing the  element :%d\n",dequeue(&q));
    printf("dequeuing the  element :%d\n",dequeue(&q));
    enqueue(&q,56);
     if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
    return 0;
}