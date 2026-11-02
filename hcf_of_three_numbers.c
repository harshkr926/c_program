#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three number ");
    scanf("%d %d %d",&a,&b,&c);
    int rem;
    int hcf;
    while(b!=0){
    rem=a%b;
    a=b;  
    b=rem;  
    }
    while(c!=0){
    rem=a%c;
    a=c;
    c=rem;    
    }
    hcf=a;
    printf("HCF=%d",hcf);
    return 0;
}