#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("composite number.");
            break;
        }
        else{
            printf("prime number.");
            break;
        }
    }
    return 0;
}