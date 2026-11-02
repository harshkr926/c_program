#include<stdio.h>
int factorial(int a){
    int product=1;
    for(int i=1;i<=a;i++){
        product=product*i;
    }
    return product;
}
int combination(int n,int r){
    int comb=factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int r;
    printf("enter another number: ");
    scanf("%d",&r);
    int comb=combination(n,r);
    printf("combination=%d",comb);
    return 0;
}