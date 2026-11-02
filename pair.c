#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<=n-1;i++){
        printf("enter elements: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
            printf("%d,%d",arr[i],arr[j]);

                count++;
            }
    }
    }
    printf("%d",count);
    return 0;
}