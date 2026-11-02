#include<stdio.h>
int main(){
int x,y;
printf("enter x and y:");
scanf("%d %d",&x,&y);
if (x==0 && y==0){
    printf("it is at the origin.");
}
else if(x==0){
    printf("it is on the y axis.");
}
else if(y==0){
    printf("it is on the x axis.");
}
else{
    printf("it lies on the x-y plane.");
}
return 0;
}