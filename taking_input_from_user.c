#include<stdio.h>
int main(){
    int arr[5];
    int a=1;
    for(int i=0;i<=4;i++){
        printf("enter %dst element: ",a);
        scanf("%d",&arr[i]);
        a++;
    }
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}