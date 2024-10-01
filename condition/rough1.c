#include<stdio.h>
int main(){
    int a=6;
    
    printf("%d\n",(a++)+(--a));
    printf("%d",a);
    printf("%d",(--a)+(a=3)+(++a));
    return 0;
}