#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void linkedlisttraversal(struct node*ptr) 
{
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
//case 1: insert at the first ;
/*
struct node*insertatfirst(struct node*head,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
}*/
//case 2:insert in between ;
/*struct node*insertatindex(struct node*head,int data,int index)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	struct node*ptr1=head;
	int i=0;
	while(i!=index-1)
	{
		ptr1=ptr1->next;
		i++;
	}
	ptr->data=data;
	ptr->next=ptr1->next;
	ptr1->next=ptr;
	return head;
}*/
//case3: insert at end ;
/*struct node*insertatend(struct node*head,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node*ptr1=head;
	
	while(ptr1->next!=NULL)
	{
		ptr1=ptr1->next;
	}
	ptr1->next=ptr;
	ptr->next=NULL;
	return head;
}*/
//case4:insert after a node;
struct node*insertafteranode(struct node*head,struct node*prevnode,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=prevnode->next;
	prevnode->next=ptr;
	return head;
}

int main()
{
	struct node*head;
	struct node*second;
	struct node*third;
	struct node*fourth;
	struct node*fifth;
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
   	fourth=(struct node*)malloc(sizeof(struct node));
   	fifth=(struct node*)malloc(sizeof(struct node));
   	head->data=7;
   	head->next=second;
   	second->data=10;
   	second->next=third;
	third->data=13;
   	third->next=fourth;
	fourth->data=16;
   	fourth->next=fifth;
	fifth->data=19;
   fifth->next=NULL;
   printf("linkedlist before insertion :");
    linkedlisttraversal(head);
  // head=insertatfirst(head,4);
   // head=insertatindex(head,5,2);
   //head=insertatend(head,4);
   head=insertafteranode(head,second,4);
   printf("linkedlist after insertion :");
   linkedlisttraversal(head);
   
   return 0;
}
