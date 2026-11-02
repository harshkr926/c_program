#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows: ");
    scanf("%d",&n);
    int m;
    printf("enter no. of column: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=m;j=j+1){
            printf(" %d ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}