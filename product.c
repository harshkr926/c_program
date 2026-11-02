#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int arr[n];
    int a=1;
    int product=1;
    for(int i=0;i<=n-1;i++){
        printf("enter %dst number",a);
        scanf("%d",&arr[i]);
        a++;
    }
    for(int i=0;i<=n-1;i++){
        product=product*arr[i];
    }
    printf("PRODUCT=%d",product);
    return 0;
}