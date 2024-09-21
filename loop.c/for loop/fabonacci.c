#include<stdio.h>
int main(){
    int no1;
    printf("Enter your num1 :");
    scanf("%d",&no1);
    int no2;
    printf("Enter your num2 :");
    scanf("%d",&no2);
        int a=no1;
        int fabonacci=0;
        int b=--no1;
        for(;fabonacci<=no2;){
            fabonacci=a+b;
            printf("%d,",fabonacci);
            a=b;
            b=fabonacci;
        }
    return 0;
}