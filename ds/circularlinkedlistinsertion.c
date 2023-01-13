#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};

void linkedlisttraversal(struct node*head)
{
		struct node*p=head;
	do
	{
		printf("%d\n",p->data);
		p=p->next;
	}
	while(p!=head);
}
//Case 1: insert at the first;
struct node*insertatfirst(struct node*head,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node*p=head->next;
	while(p->next!=head)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
}
//Case 2: insert at middle;
struct node*insertatindex(struct node*head,int data,int index)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	struct node*p=head;
	ptr->data=data;
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->next=p->next;
	p->next=ptr;
	return head;	
}
//Case 3:insert at end;
struct node*insertatend(struct node*head,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node*p=head->next;
	while(p->next!=head)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	ptr=head;
	return head;
}
// Case 3 insertion after the node;
struct node*insertafternode(struct node*head,struct node*p,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}
	int main()
	{
		struct node *head;
		struct node *second;
		struct node *third;
		struct node *fourth;
		struct node *fifth;
		head = (struct node *)malloc(sizeof(struct node));
		second=(struct node *)malloc(sizeof(struct node));
		third=(struct node *)malloc(sizeof(struct node));
		fourth=(struct node *)malloc(sizeof(struct node));
		fifth=(struct node *)malloc(sizeof(struct node));
		
		head->data=4;
		head->next=second;
		second->data=8;
		second->next=third;
		third->data=12;
		third->next=fourth;
		fourth->data=16;
		fourth->next=fifth;
		fifth->data=20;
		fifth->next=head;
	printf("circular linkedlist before :\n");
	linkedlisttraversal(head);
	head=insertatfirst(head,6);
	head=insertatindex(head,6,2);
	head=insertatend(head,6);
	head=insertafternode(head,fifth,6);
	printf("circular linkedlist after the insertion :\n");
	linkedlisttraversal(head);
	return 0;
}
