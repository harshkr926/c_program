#include<stdio.h>
int main(){
    int l;
    printf("enter length ");
    scanf("%d",&l);
    int b;
    printf("enter breadth ");
    scanf("%d",&b);
    int area=l*b;
    int perimeter=2*(l+b);
    if(area>perimeter){
        printf("area is larger than perimeter ");
        printf("\nand the area is %d",area);
    }
    else {
    printf("perimeter is larger than area ");
    printf("\nand the perimeter is %d",perimeter);    
    }
    return 0;
}