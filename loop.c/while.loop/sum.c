#include<stdio.h>
int main(){
    int a;
    printf("Enter no:");
    scanf("%d",&a);
    int b=1;
    int c=0;
    while(b<=a){
        c=c+b;
        b++;
    }
    printf("Sum = %d",c);
    return 0;
}