#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int sum=0;
    int odd_digit=0;
    while(n!=0){
        odd_digit=n%10;
        if(odd_digit%2!=0){
            sum=sum+odd_digit;

        }
        n=n/10;
    }
    printf("sum=%d",sum);
    return 0;
}