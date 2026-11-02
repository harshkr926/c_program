#include<stdio.h>
int main(){
    int a;
    printf("enter first number: ");
    scanf("%d",&a);
    int b;
    printf("enter second number: ");
    scanf("%d",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("A=%d",a);
    printf("\nB=%d",b);
    return 0;
}