#include<stdio.h>
int main(){
    int a,b;
    printf("enter two number ");
    scanf("%d %d",&a,&b);
    int q=a/b;
    int r=a%b;
    printf("remainder=%d",r);
    printf("\nquotient=%d",q);
    return 0;
}