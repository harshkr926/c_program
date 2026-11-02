#include<stdio.h>
int fact(int a){
    int product=1;
    for(int i=1;i<=a;i++){
        product=product*i;
    }
    return product;
}
int combination(int n,int r){
    int comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=(n+1)-i;j++){
            printf("  ");
        }
        for(int k=0;k<=i;k++){
            printf(" %d ",combination(i,k));
        }
        printf("\n");
    }
    return 0;
}