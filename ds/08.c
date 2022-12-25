// #include<stdio.h>
// int main(){
//     int n;
//     int m;    
//     int i=0,j=0;

//     printf("enter the element of arr a");
//     scanf("%d",&n);
//     int arr1[n];
//     printf("enter the elements");
//     for (int a=0;a<n;a++){
//         scanf("%d",&arr1[a]);
//     }
//     printf("enter the no of element");
//     scanf("%d",&m);
//     int arr2[m];
//     int c[m+n];
//     printf("enter the element of arr2");
//     for (int b=0;b<m;b++){
//         scanf("%d",&arr2[b]);
//     }
//     int k=0;
//     while (i<n && j<m){
//         if (arr1[i]<arr2[j]){
//             c[k++]=arr1[i++];
           
//         }
//         if (arr1[i]>arr2[j]){
//             c[k++]=arr2[j++];
//         }
//         if (arr1[i]=arr2[j]){
//             c[k++]=arr2[j++];
//             c[k++]=arr1[i++];
//         }
//     }
//     while (i<n)
//     {
//         c[k++]=arr1[i++];
//     }
//     while (j<m)
//     {
//         c[k++]=arr2[j++];
//     }
    
    
//     for (int k=0;k<(m+n);k++){
//         printf("%d ",c[k]);
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int n1;
    scanf("%d",&n1);
    int a[n1];
    for (int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    int n2;
    scanf("%d",&n2);
    int b[n2];
    for (int j=0;j<n2;j++){
        scanf("%d",&b[j]);
    }
    int c[n1+n2];
    int k=0;

    for (int j=0;j<n1;j++){
        c[k++]=a[j];

    }
    for (int j=0;j<n2;j++){
        c[k++]=b[j];
    }
    int temp;
     for(int i=0;i<n1+n2;i++)
    {
        for( int j=i+1;j<n1+n2;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for (int j=0;j<n2+n1;j++){
        printf("%d",c[j]);
    }
    return 0;
}