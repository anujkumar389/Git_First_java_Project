#include<stdio.h>
int a;
int b;
int input(){
    printf("Enter no :");
    scanf("%d%d",&a,&b);
}
int multiply(){
    input();
    return a*b;
}
int main(){
    printf("%d",multiply());

    return 0;
}