#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("a=..");
    scanf("%d",&a);
    printf("b=...");
    scanf("%d",&b);
    printf("c=..");
    switch (a>b)
    {
    case 1:
        printf("%d is maximum",a);
        break;
    case 0:
        printf("%d is max",b);
        break;
    default:
    printf("invaild input");
    }
    return 0;
}