#include<stdio.h>
int main(){
    int a;
    printf("enter first number ");
    scanf("%d",&a);
    int b;
    printf("enter second number ");
    scanf("%d",&b);
    int c;
    printf("enter third number ");
    scanf("%d",&c);
    int min=a;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
        min=a;
    }
    if(a>c){
    int temp=a;
    a=c;
    c=temp;
    min=a;
    }
    if(b>c){
        int temp=b;
        b=c;
        c=temp;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}