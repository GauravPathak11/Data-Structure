#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int *arr;
};
//condition for overflow and underflow;
int isEmpty(struct stack*ptr)
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else 
	return 0;
}
int isFull(struct stack*ptr)
{
	if(ptr->top==ptr->size-1)
	return 1;
	else 
	return 0;
}
void push(struct stack*ptr,int val)
{
	if(isFull(ptr))
	{
		printf("overflow condition and %d cannot be add\n  :",val);
	}
	else
	{
	ptr->top++;
	ptr->arr[ptr->top]=val;	
	}
} 
int pop(struct stack*ptr)
{
	if(isEmpty(ptr))
	{
		printf("underflow conditoion :");
		return -1;
	}
	else{
	int	val=ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}
int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}
int stackTop(struct stack*s)
{
	return s->arr[s->top];
}
int stackBottom(struct stack*s)
{
	return s->arr[0];
}
//creation of stack;
int main()
{
	struct stack*s;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->size=8;
	s->top=-1;
	s->arr=(int *)malloc(s->size*sizeof(int));
	printf("stack is successfully created\n");  

	printf("%d\n",isEmpty(s));
	printf("%d\n",isFull(s));
	push(s,10);
	push(s,20);
	push(s,30);
	push(s,40);
	push(s,50);
	push(s,60);
	push(s,70);
	push(s,80);
	printf("%d\n",isEmpty(s));
	printf("%d\n",isFull(s));
	printf("popped %d from the stack\n",pop(s));
	printf("popped %d from the stack\n",pop(s));
	printf("popped %d from the stack\n",pop(s));
	    // Printing values from the stack
    int j;
    for ( j =1 ; j <= s->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(s, j));
    }
	printf("The topmost element of the stack is %d\n",stackTop(s));
	printf("The bottommost element of the stack is %d\n",stackBottom(s));
	return 0;
}
