#include<stdio.h>
int main(){
    float x;
    printf("enter a decimal number ");
    scanf("%f",&x);
    int y=x;
    double z=x-y;
    printf("the fractional part of the number is %f",z);
    return 0;
}