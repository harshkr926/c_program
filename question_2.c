#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int arr[n];
    int a=1;
    for(int i=0;i<=n-1;i++){
        printf("enter marks of %dst student: ",a);
        scanf("%d",&arr[i]);
        a++;
        }
        for(int i=0;i<=n-1;i++){
            if(arr[i]<35){
                printf("%d ",i);
            }
    }
    return 0;
}