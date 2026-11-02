#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int sum=0;
    int rem;
    int x=n;
    while(x!=0){
    rem=x%10;
    sum=sum*10+rem;
    x=x/10;
    }
    printf("reverse=%d\n",sum);
    if(sum=n){
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
    return 0;
}