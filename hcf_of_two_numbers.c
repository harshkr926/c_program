#include<stdio.h>
int main(){
    int a;
    printf("enter first number ");
    scanf("%d",&a);
    int b;
    printf("enter second number ");
    scanf("%d",&b);
    int rem;
    int hcf;
    while(b!=0){
    rem=a%b;
    a=b;
    b=rem;
    }
    hcf=a;
    printf("HCF=%d",hcf);
    return 0;
}