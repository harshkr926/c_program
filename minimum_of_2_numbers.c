#include<stdio.h>
int minimum(int a,int b){
int min=a;
if(b<a){
    int temp=b;
    a=b;
    a=temp;
    min=a;
}
return min;
}
int main(){
    int a;
    printf("enter first number: ");
    scanf("%d",&a);
    int b;
    printf("enter second number: ");
    scanf("%d",&b);
    int min=minimum(a,b);
    printf("minimum=%d",min);
    return 0;
}