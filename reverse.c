#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int sum=0;
    int digit=0;
    while(n!=0){
    digit=n%10;
    sum=sum*10+digit;
    n=n/10;
}
printf("reverse=%d",sum);
    return 0;
}