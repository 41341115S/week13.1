#include<stdio.h>
#include<stdlib.h>

int sub(int a,int b){
    return a-b;
}

int main(){
    printf("Do not hello World");

    int a=2;
    int b=3;
    printf("%d",sub(a,b));

    return 0;
}