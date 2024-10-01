// 3. Write a program to swap two numbers using pointers and
// functions.(call by reference.)
// Input: num1=43 , num2= 25
// Output : num1=25 , num2= 43
#include<stdio.h>
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main(){
    int num1=9,num2=5;
    swap(&num1,&num2);
    printf("num1 :%d,num2 :%d",num1,num2);
    return 0;
}