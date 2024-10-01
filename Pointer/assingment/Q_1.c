// 1. How do you declare and initialize a pointer variable ?

#include<stdio.h>
int main(){
     int a=5;
     int *p;
     p=&a;
     printf("%d",*p);

     return 0;
}