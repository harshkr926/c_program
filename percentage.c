#include<stdio.h>
int main(){
    int x1,x2,x3,x4,x5;
    printf("enter the marks of 5 subject ");
    scanf("%d %d %d %d %d",&x1,&x2,&x3,&x4,&x5);
    float average=(x1+x2+x3+x4+x5)/5;
    printf("average=%f",average);
        return 0;
}