#include<stdio.h>
int factorial(int a){
    int product=1;
    for(int i=1;i<=a;i++){
        product=product*i;
    }
    return product;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    long long int fact=factorial(n);
    printf("factorial=%d",fact);
    return 0;
}