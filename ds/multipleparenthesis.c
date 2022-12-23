#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    char*arr;
};
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
    {
        return 1;
    }
    else
        return 0;
}
int push(struct stack*ptr, int val)
{
    if(isFull(ptr))
    {
        printf(" Overflow condition :\n");
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
        printf("Unerflow condition");
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
    }
}    
int match(char a, char b)
{
    if(a=='(' && b==')'||a=='{' && b=='}'||a=='[' && b==']')
    {
        return 1;
    }
    return 0;
}
int parenthesis(char*exp)
{
    char popped_ch;
    struct stack*s;
    s=(struct stack*)malloc(sizeof(struct stack));
    s->size=100;
    s->top=-1;
    s->arr=(char *)malloc(s->size*sizeof(char));
   
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='('&&exp[i]=='{'&&exp[i]=='[')
        return 0;
        else if(exp[i]==')'&&exp[i]=='}'&&exp[i]==']')
        {
            if(isEmpty(s))
            {
                push(s,exp[i]);
            }
                popped_ch=pop(s);
                if(!match(popped_ch,exp[i]))
                {
                    return 0;
                }       
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
    char*exp="(10*{20+6[54-8]80+70})";
    if(parenthesis(exp))
    printf("the parenthesis is balenced :");
    else
    {
        printf("the parenthesis is not matching");
    }
    return 0;
}
