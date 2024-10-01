// 2. Write a program to take two numbers from user and add them using
// pointers.
// Input: num1=12 , num2= 10
// Output : Sum = 22
#include<stdio.h>
int main(){
    int a,b;
    int *p=&a;
    int *q=&b;
    printf("Enter 1st no :");
    scanf("%d",p);
    printf("Enter 2nd no :");
    scanf("%d",q);
    printf("sum : %d",*p+*q);
    return 0;
}