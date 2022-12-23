#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*top=NULL;
void linkedlisttraversal(struct node*ptr)
{
	while(ptr!=NULL)
	{
		printf("Elemnt:%d\n",ptr->data);
		ptr=ptr->next;
	}
}
int isEmpty(struct node*top)
{
	if(top==NULL)
	return 1;
	else
	return 0;
}
int isFull(struct node*top)
{ 	
	struct node*ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	return 1;
	else
	return 0;
}
struct node*push(struct node*top,int val)
{
	if(isFull(top))
	{
		printf("stack overflow\n");
	}
	else
	{
		struct node*ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=val;
		ptr->next=top;
		top=ptr;
		return top;
	}
}
 int pop(struct node*p)
{
	if(isEmpty(p))
	{
		printf("underflow conition\n");
	}
	else
	{
		struct node*ptr=p;
		int val=ptr->data;
		top=p->next;
		free(ptr);
		return val;
			
	}
}
int peek(int pos)
{ 
	struct node*ptr = top;
	int i;
	for(i=0;i<pos-1&&ptr!=NULL;i++)
	{
		ptr=ptr->next;
	}
	if(ptr!=NULL)
	{
		return ptr->data;
	}
}
int stackTop()
{
	return top->data;
}
stackBottom()
{
	struct node*ptr = top;
	while(ptr!= NULL)
	{
		ptr = ptr -> next;
	 }
	return ptr -> data; 
}
int main()
{
	
	top=push(top,10);
	top=push(top,20);
	top=push(top,30);
	top=push(top,40);
	top=push(top,50);
	top=push(top,60);
	top=push(top,70);
	top=push(top,80);
	printf("stack before ************************************\n");
	linkedlisttraversal(top);
	printf("--------------------------\n-----------------------\n----------------------------\n");
	int element=pop(top);
	printf("%d element is poopped from stack\n",element);
	element=pop(top);
	printf("%d element is poopped from stack\n",element);
	element=pop(top);
	printf("%d element is poopped from stack\n",element);
	printf("--------------------------\n-----------------------\n----------------------------\n");
	printf("stack after popped ********************************\n");
	linkedlisttraversal(top);
	int i;
	for(i=1;i<=5;i++)
	{
		printf("the value at %d is %d\n",i,peek(i));
	}
	return 0;
}

