#include<stdio.h>
void england(){
    printf("\nyou are in england");
    return;
}
void australia(){
    printf("\nyou are in australia");
    england();
    return;
}
void india(){
    printf("\nyou are in india");
    australia();
    return;
}
int main(){
    india();
    return 0;
}