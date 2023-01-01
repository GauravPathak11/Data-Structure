#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*l;
    struct node*r;
};
struct node*createnode(int data)
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=data;
    root->l=NULL;
    root->r=NULL;
    return root;
}
struct node*iter_search(struct node*root,int key)
{
    while(root!=NULL)
    {
        if(key=root->data)
        return root;
        else if(key>root->data)
        {
            root=root->r;
        }
        else
        {
            root=root->l;
        }
    return NULL;
    }
}
int main()
{
    struct node*m1,*m2,*m3,*m4,*m5,*m6;
    m1=createnode(5);
    m2=createnode(3); 
    m3=createnode(6);
    m4=createnode(1);
    m5=createnode(4); 
    m1->l=m2;
    m1->r=m3;
    m2->l=m4;
    m2->r=m5;   
    struct node*n=iter_search(m1,6);
     if(n!=NULL)
     {
         printf(" found:%d \n",n->data);
     }
    else
    {
        printf("element not found");
    }
}