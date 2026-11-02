#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int arr[n];
    int a=1;
    int sum=0;
    for(int i=0;i<=n-1;i++){
        printf("enter %dst number",a);
        scanf("%d",&arr[i]);
        a++;
    }
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }
    printf("SUM=%d",sum);
    return 0;
}