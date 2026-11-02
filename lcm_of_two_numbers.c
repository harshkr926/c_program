#include<stdio.h>
int main(){
    int a,b;
    printf("enter two number ");
    scanf("%d %d",&a,&b);
    int x=a;
    int y=b;
    int rem;
    int hcf;
    int lcm;
    while(y!=0){
    rem=x%y;
    x=y;
    y=rem;    
    }
    hcf=x;
    lcm=(a*b)/hcf;
    printf("HCF=%d",hcf);
    printf("\nLCM=%d",lcm);
    return 0;
}