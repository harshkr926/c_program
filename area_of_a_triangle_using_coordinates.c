#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("enter the coordinates respectively :");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    int z=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    printf("area of the triangle=%d",z);
    return 0;
}