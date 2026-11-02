#include<stdio.h>
int sum(int a,int b){
    int add=a+b;
    return add;
}
int main(){
    int a;
    printf("enter first number: ");
    scanf("%d",&a);
    int b;
    printf("enter second number: ");
    scanf("%d",&b);
    int c=sum(a,b);
    printf("sum=%d",c);
    return 0;
}