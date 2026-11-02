#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int arr[n];
    int a=1;
    int max;
    for(int i=0;i<=n-1;i++){
        printf("enter %dst element: ",a);
        scanf("%d",&arr[i]);
        a++;
    }
    max=arr[0];
    for(int i=0;i<=n-1;i++){
        if(INT_MIN<arr[i]){
            max=arr[i];
        }
    }
    printf("maximum=%d",max);
    return 0;
}