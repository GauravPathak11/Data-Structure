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
void preorder(struct node*root)
{
    if(root!=NULL)
    {
    printf(" %d ",root->data);
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
        printf(" %d ",root->data);
    }
}
void inorder(struct node*root)
{
    if(root!=NULL)
    {
        inorder(root->l);
        printf(" %d ",root->data);
        inorder(root->r);
    }
}
int leafnode(struct node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->l==NULL && root->r==NULL)
    {
        return 1; 
    }
    return leafnode(root->l)+leafnode(root->r);
}
int childnode(struct node*root)
{
    if(!root)
    {
        return 0;
    }
    if(root->l)
    {
        return 1+childnode(root->l)+childnode(root->r);
    }
    else
    return childnode(root->r);
}
int countnode(struct node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+countnode(root->l)+countnode(root->r);
}
int main()
{
   /* struct node*m1;
    m1=(struct node*)malloc(sizeof(struct node));
    m1->data=10;
    m1->l=NULL;
    m1->r=NULL;
    struct node*m2;
    m2=(struct node*)malloc(sizeof(struct node));
    m2->data=20;
    m2->l=NULL;
    m2->r=NULL;
    struct node*m3;
    m3=(struct node*)malloc(sizeof(struct node));
    m3->data=30;
    m3->l=NULL;
    m3->r=NULL;
    */
   struct node*m1=createnode(10);
   struct node*m2=createnode(20);
   struct node*m3=createnode(30);
   struct node*m4=createnode(40);
   struct node*m5=createnode(50);
   struct node*m6=createnode(60);
   struct node*m7=createnode(70);
   struct node*m8=createnode(80);
   struct node*m9=createnode(90);
   struct node*m10=createnode(100); 
    m1->l=m2;
    m1->r=m3;
    m2->l=m4;
    m2->r=m5;
    m3->l=m6;
    m3->r=m7;
    m4->l=m8;
    m4->r=m9;
    m5->r=m10; 
    printf("preorder of binary tree :");
    preorder( m1);
    printf("\n");
    printf("postorder of binary tree :");
    postorder(m1);
    printf("\n");
    printf("Inorder of binary tree :");
    inorder(m1);
    printf("\n");
    printf("leaf node=%d\n",leafnode(m1));
    printf("total node =%d\n",countnode(m1));
    printf("child node=%d\n",childnode(m1));
    return 0;
} 