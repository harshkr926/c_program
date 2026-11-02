#include<stdio.h>
void swap(int* a,int* b){
    int temp=*a;
    * a=* b;
    * b=temp;
    return;
}
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    int b;
    printf("enter another number: ");
    scanf("%d",&b);
    swap(&a,&b);
     printf("A=%d",a);
    printf("\nB=%d",b);
    return 0;
}