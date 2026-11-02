#include<stdio.h>
int main(){
    int cp;
    printf("enter cost price ");
    scanf("%d",&cp);
    int sp;
    printf("enter selling price ");
    scanf("%d",&sp);
    if(cp>sp){
    printf("LOSS");
    printf("\nand the loss margine is %d",cp-sp);
    }
    else{
    printf("profit");
    printf("\nand the profit margine is %d",sp-cp);    
    }
    return 0;
}