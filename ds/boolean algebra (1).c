
#include<stdio.h>
int main(){

int i;
int a[4]={1,0,0,1};
int b[4]={0,1,0,1};
printf("A B");
for(i=0;i<4;i++){

    printf("\n%d%d\n",a[i],b[i]);
}
for(i=0;i<4;i++){
    printf("%d",b[i]);
}
printf("AND GATE");
for(i=0;i<4;i++){
    printf("\n%d\n",(a[i] & b[i]));

}
printf(" OR gate");
for(i=0;i<4;i++){
    printf("\n%d\n",(a[i]||b[i]));
}
printf("Not gate\n");
for(i=0;i<4;i++){
    printf("\n%d%d\n",!a[i],!b[i]);
}printf("");





}




