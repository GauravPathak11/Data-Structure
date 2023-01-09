#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*l;
    struct node*r;
};
struct node*createnode(int data)
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->l=NULL;
    root->r=NULL;
    root->data=data;
    return root;
}
void preorder(struct node*root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->l);
        preorder(root->r);
    }
}
void inorder(struct node*root)
{
    if(root!=NULL)
    {
        inorder(root->l);
        printf("%d ",root->data);
        inorder(root->r);
    }
}
void postorder(struct node*root)
{
    if(root!=NULL)
    {
        postorder(root->l);
        postorder(root->r);
        printf("%d ",root->data);
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
        else if(prev!=NULL && prev->data>=root->data)
        {
            return 0;
        }
        prev=root;
        return isBST(root->r);
    }
    else
    {
        return 1;
    }
}
struct node*search(struct node*root,int key)
{
    while(root!=NULL)
    {
        if(key=root->data)
        {
            return root;
        }
        else if (key<root->data)
        {
            root=root->l;
        }
        else{
            root=root->r;
        }
        return NULL;
    }
}
void insertion(struct node*root,int key)
{
    struct node*prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(key==root->data)
        {
            printf("element is already in thr BST, That's why insertion is not possible :");
            return ;
        }
        else if(key<root->data)
        {
            root=root->l;
        }
        else
        {
            root=root->r;
        }
    }
    struct node*new=createnode(key);
    if(key<prev->data)
    {
        prev->l=new;
    }
    else{
        prev->r=new;
    }
}
struct node*inOrderprecedor(struct node*root)
{
    root=root->l;
    while(root->r!=NULL)
    {
        root=root->r;
    }
    return root;
}
struct node*deletion(struct node*root,int val)
{
     struct node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->l==NULL&&root->r==NULL){
        free(root);
        return NULL;
    }
    if (val < root->data){
        root-> l = deletion(root->l,val);
    }
    else if (val > root->data){
        root-> r= deletion(root->r,val);
    }
    else{
        iPre=inOrderprecedor(root);
        root->data = iPre->data;
        root->l=deletion(root->l,iPre->data);
    }
    return root;
}
int main()
{
    struct node*m1,*m2,*m3,*m4,*m5,*m6;
    m1=createnode(6);
    m2=createnode(4);
    m3=createnode(8);
    m4=createnode(3);
    m5=createnode(5);
    m1->l=m2;
    m1->r=m3;
    m2->l=m4;
    m2->r=m5;
    // preorder(m1);
    // printf("\n");
    // postorder(m1);
    // printf("\n");
    // inorder(m1);
    // printf("\n");
    // // printf("%d ",isBST(m1));
    // // printf("\n");
    // if(isBST(m1))
    // printf("True");
    // else
    // printf("False");
    // printf("\n");
    // struct node*p=search(m1,8);
    // if(p!=NULL)
    // {
    //     printf("Element is found");
    // }
    // else
    // {
    //     printf("element is not present");
    // }
    // printf("\n"); 
   
    inorder(m1);
    printf("\n");
    deletion(m1, 5);
    printf("after deletion\n");
    inorder(m1);
    return 0;
}
