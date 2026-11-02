#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers ");
    scanf("%d %d %d",&a,&b,&c);
    int x=a;
    int y=b;
    int z=c;
    int rem;
    int hcf;
    int lcm;
    while(y!=0){
    rem=x%y;
    x=y;
    y=rem;    
    }
    while(z!=0){
    rem=x%z;
    x=z;
    z=rem;    
    }
    hcf=x;
    lcm=(a*b*c)/hcf;
    printf("HCF=%d",hcf);
    printf("\nLCM=%d",lcm);
    return 0;
}