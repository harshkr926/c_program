#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int arr[n];
    int a=1;
    for(int i=0;i<=n-1;i++){
        printf("enter %dst element: ",a);
        scanf("%d",&arr[i]);
        a++;
    }
    for(int i=0;i<=n-1;i++){
        printf("%p\n",arr[i]);
    }
    return 0;
}