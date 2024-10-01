// 4.Write a program to find the maximum number between two numbers
// using a pointer.
// Input: num1=32 , num2= 65
// Output : num2 = 65 is max.
#include<stdio.h>
int main(){
    int num1,num2;
    printf("1st no :");
    scanf("%d",&num1);
    printf("2nd no :");
    scanf("%d",&num2);
    int *p=&num1;
    int *q=&num2;
    if(*p>*q){
        printf("num1 is max :%d",*p);
    }else{
        printf("num2 is max : %d",*q);
    }
    return 0;
}