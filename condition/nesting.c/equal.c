#include<stdio.h>
int main(){
    int a;
    printf("enter your num1 :");
    scanf("%d",&a);
    char oprend;
    printf("enter your oprend :");
    scanf(" %c",&oprend);
    int b;
    printf("enter your num2 :");
    scanf("%d",&b);
    
    switch(oprend){
        case '+':
            printf("sum of %d and %d is %d",a,b,a+b);
            break;
        case '-':
            printf("substraction of %d and %d is %d",a,b,a-b);
            break;
        case '*':
            printf("multiplication of %d and %d is %d",a,b,a*b);
            break;
        case '/':
            printf("division of %d and %d is %d",a,b,a/b);
            break;
        case '%':
            printf("modulus of %d and %d is %d",a,b,a%b);
            break;
        default:
        printf("Invilid input");
        break;
    }
    return 0;
}