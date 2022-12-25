

#include<stdio.h>
int main()
{
    int a[50],b[60],c[110],i,j,n1,n2,n3,k=0,temp;
    printf("enter the number of element : ");
    scanf("%d",&n1);
    printf("element of first array :\n");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("enter the number of element of second array : ");
    scanf("%d",&n2);
    printf("element of second array :");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    n3=n1+n2;
    //copy array 1 into 3 array
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    //copy array 2 into 3 array
    for(i=0;i<n2;i++)
    {
        c[i+n1]=b[i];
    }
    //merge array
    printf("merge array :\n");
    for(i=0;i<n3;i++)
    {
        printf("  %d  ",c[i]);
    }
     printf("\n sorting of an array :\n");
    for(i=0;i<n3;i++)
    {
        for(j=i+1;j<n3;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for(i=0;i<n3;i++)
        printf(" %d ",c[i]);

    printf("\n union of the set :\n");
    for(i=0;i<n3;i++)
    {
        k=0;
        for(j=i+1;j<n3;j++)
        {
            if(c[i]==c[j])
            {
                k++;

            }
        }
        if(k==0)
        {
          printf(" %d ",c[i]);
        }
    }
       return 0;
}
