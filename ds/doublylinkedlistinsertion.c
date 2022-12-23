#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*prev;
	struct node*next;
};
void doublylinkedlist(struct node*head)
{
	struct node*ptr=head;
	while(head!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}	
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
	head->data=10;
	head->next=second;
	head->prev=NULL;
	second->data=20;
	second->next=third;
	second->prev=head;
	third->data=30;
	third->next=fourth;
	third->prev=second;
	fourth->data=40;
	fourth->next=fifth;
	fourth->prev=fifth;
	fifth->data=50;
	fifth->next=NULL;
	fifth->prev=fourth;
	doublylinkedlist(head);
	return 0;
}
