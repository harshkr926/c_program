#include<stdio.h>
int main(){
    int r;
    printf("enter a radius ");
    scanf("%d",&r);
    float pi=3.1415;
    float volume=(4*pi*r*r*r)/3;
    printf("volume=%f",volume);
return 0;
}