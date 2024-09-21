#include<stdio.h>
int main(){
    int a;
    printf("enter your no :");
    scanf("%d",&a);
    int b=1;
    int c=1;
    while(b<=a){
        c=c*b;
        b++;
    }
    printf("factorial=%d",c);
    return 0;
}