#include<stdio.h>
int main(){
    int p;
    printf("enter principal amount ");
    scanf("%d",&p);
    int r;
    printf("enter rate ");
    scanf("%d",&r);
    int t;
    printf("enter time ");
    scanf("%d",&t);
    int si=(p*r*t)/100;
    printf ("total=%d",si);
    return 0;
}