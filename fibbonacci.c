#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int sum=0;
    for(int i=1;i<=n;i++){
    printf("%d ",a); 
    sum=a+b;
    a=b;
    b=sum;   
    }
    return 0;
}