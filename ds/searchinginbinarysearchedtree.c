#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*l;
    struct node*r;
    int data;
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
void preorder(struct node*root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->l);
        preorder(root->r);
    }
}
void postorder(struct node*root)
{
    if(root!=NULL)
    {      
        postorder(root->l);
        postorder(root->r);
        printf("%d",root->data);
    }
}
void inorder(struct node*root)
{
    if(root!=NULL)
    {      
        inorder(root->l);
        printf("%d",root->data);
        inorder(root->r);
    }
}
int isBST(struct node*root)
{
    static struct node*prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->l))
        {
            return 0;
        }
        else if (prev!=NULL&&root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        return isBST(root->r);
    }
    else
    return 1;
}
struct node*search(struct node*root,int key)
{
    if(root==NULL)
    return NULL;
    else if(key==root->data)
    return root;
    else if(key>root->data)
    return search(root->r,key);
    else
    return search(root->l,key);
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
    // printf("%d",isBST(m1));
    if(isBST(m1))
    {
        printf("This is BST\n");
    }
    struct node*n=search(m1,6);
     if(n!=NULL)
    {
         printf("%d \n",n->data);
    }
    else
    {
        printf("element not found");
    }
}

