#include<stdio.h>
int main(){
    int r;
    printf ("enter a radius ");
    scanf("%d",&r);
    float pi=3.1415;
    float area = pi * r * r;
    printf ("area=%f",area);
    return 0;
}