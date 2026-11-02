#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("enter elements: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<=n-1;i++){
        if(i%2!=0){
            arr[i]=arr[i]*2;
        }
        else{
            arr[i]=arr[i]+10;
        }
        printf("%d ",arr[i]);
    }
    return 0;
}