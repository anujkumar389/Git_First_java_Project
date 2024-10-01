#include<stdio.h>
int main(){
    printf("enter your integer :");
    int a;
    scanf("%d",&a);
    switch (a>0?1:a<0?-3:0)
    {
    case 1:
        printf("%d is positive number",a);
        break;
    case -1:
        printf("%d is negative number",a);
        break;
    case 0:
        printf("%d is nither positive or negative",a);
        break;
    default:
        printf("invalid input");
        break;
    }
    return 0;
}