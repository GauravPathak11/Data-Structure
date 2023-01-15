#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    char *arr;
};
int isEmpty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else {
        return 0;
    }
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
char pop(struct stack*ptr)
{
	if(isEmpty(ptr))
	{
		printf("underflow conditoion :\n");
		return -1;
	}
	else{
	int	val=ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}
int parenthesis(char*exp)
{
    struct stack*s;
    s->size=50;
    s->top=-1;
    s->arr=(char *)malloc(s->size*sizeof(char));
    int i;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(s,'(');
        }
        else if(exp[i]==')')
        {
            if(isEmpty(s))
            {
                return 0;
            }
            pop(s);
        }
    }
    if(isEmpty(s))
    {
        return 1;
    }
    else 
        {
            return 0;
        }
}
int main()
{
    char*exp="8*(5)";
    if( parenthesis(exp))
    {
        printf("parenthesis is matching :\n");
    }
    else
    {
        printf("parenthesis is not matching :\n");
    }
    return 0;
}
