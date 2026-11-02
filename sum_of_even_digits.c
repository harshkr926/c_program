#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int sum=0;
    int evendigit=0;
    while(n!=0){
        evendigit=n%10;
        if(evendigit%2==0){
            sum=sum+evendigit;

        }
        n=n/10;
    }
    printf("sum=%d",sum);
    return 0;
}