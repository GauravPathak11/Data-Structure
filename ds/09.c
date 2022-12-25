#include<stdio.h>

int main(){
    int arr1[]={4,5,6};
    int arr2[]={2,3,7,8,9,10};
    int i=0,j=0;
    
    int n1=sizeof(arr1)/4;
    int n2=sizeof(arr2)/4;
    int c[n1+n2];
    int k=0;
    while(i<n1 &&j<n2){
        if (arr1[i]>arr2[j]){
           c[k++]=arr2[j++];
            j++;
        }
        if (arr1[i]<arr2[j]){
            c[k++]=arr1[i];
            i++;

        }
        if (arr1[i]==arr2[j]){
            c[k++]=arr1[i];
            j++;
            i++;
        }

    }
    while(i<n1){
        c[k++]=arr1[i];
        i++;
    }
    while (j<n2){
        c[k++]=arr2[j];
        j++;
    }
    for (int i=0;i<k;i++){
        printf("%d",c[i]);
        
    }
    
    

    return 0;
}
