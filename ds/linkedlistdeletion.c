#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void linkedlist(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
//Case 1: delete the first node ;
/*struct node*deleteatfirst(struct node*head)
{
	struct node*ptr=head;
	head=head->next;
	free(ptr);
	return head;
}*/
//Case 2: delete a node in between :
/*struct node*deletetheindex(struct node*head,int index)
{
	struct node*ptr1=head;
	struct node*ptr2=head->next;
	int i=0;
	while(i<index-1)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	ptr1->next=ptr2->next;
	free(ptr2);
	return head;
}*/
//Case 3:delete the last node;
/*struct node*deletethelastnode(struct node*head)
{
	struct node*p=head;
	struct node*q=head->next;
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
	return head;
}*/
//Case 4: delete the node with a given value;
struct node*deletethegivennode(struct node*head,int value)
{
	struct node*p=head;
	struct node*q=head->next;
	while(q->data!=value&&q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	if(q->data==value)
	{
		p->next=q->next;
		free(q);
	}
	return head;
}
 
	int main()
	{
	struct node *head;
	struct node *second;
	struct node *third;
	head = (struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	//linked the node
	head->data=10;
	head->next=second;
	second->data=20;
	second->next=third;
	third->data=30;
	third->next=NULL;
	printf("linkedlist before deletion :\n");
	linkedlist(head);
//	head=deleteatfirst(head);
//	head=deletetheindex(head,1);
//  head=deletethelastnode(head);
    head=deletethegivennode(head,20);
	printf("linkedlist after deletion :\n");
	linkedlist(head);
	return 0;
}
