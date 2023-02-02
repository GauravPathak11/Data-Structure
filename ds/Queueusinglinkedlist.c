#include<stdio.h>
#include<stdlib.h>
struct node*r=NULL;
struct node*f=NULL;
struct node
{
    int data;
    struct node*next;
};
void linkedlisttraversal(struct node*ptr)
{
    printf("Printing the linked list :\n");
	while(ptr!=NULL)
	{
		printf("Elemnt:%d\n",ptr->data);
		ptr=ptr->next;
	}
}
void enqueue(int val)
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        n->data=val;
        n->next=NULL;
        if(f==NULL)
        {
            f=r=n;
        }
        else
        {
            r->next=n;
            r=n;
        }
    }
}
int dequeue()
{
    int val=-1;
    struct node*ptr=f;
    if(f==NULL)
    {
        printf("Queue is Empty \n");
    }
    else
    {
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}
int main()
{
    
    linkedlisttraversal(f);
    printf("dequeueing the element %d:\n",dequeue());
    enqueue(12);
    enqueue(24);
    enqueue(36);
    enqueue(48);
    printf("dequeueing the element %d:\n",dequeue());
    printf("dequeueing the element %d:\n",dequeue());
    printf("dequeueing the element %d:\n",dequeue());
    linkedlisttraversal(f);
    return 0;
}
