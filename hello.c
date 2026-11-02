#include<stdio.h>
void greet(){
    printf("hello bro");
    return;
}
int main(){
    void greet();
    greet();
    return 0;
}