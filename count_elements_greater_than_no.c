#include<stdio.h>
int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int count=0;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("enter elements: ");
        scanf("%d",&arr[i]);
        if(arr[i]>x){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}