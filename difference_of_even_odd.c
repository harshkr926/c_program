#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int x=0;
    int y=0;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("enter elements: ");
        scanf("%d",&arr[i]);
        if(i%2==0){
            x=x+arr[i];
        }
        else{
            y=y+arr[i];
        }
    }
    printf("differnce=%d",x-y);
    return 0;
}