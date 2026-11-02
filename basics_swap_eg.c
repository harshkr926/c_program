#include<stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    int* b=&a;
    * b=9;
    printf("%p",b);
    printf("\n%d",a);
    return 0;
}