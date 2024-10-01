#include<stdio.h>
int main(){
    int a,b,result;
    char oprend;
    printf("enter your num1,oprend,num2 :");
    scanf("%d%c%d",&a,&oprend,&b);
switch (oprend)
{
case '+':
    result=a+b;
    printf("%d",result);
    break;
case '-':
    result=a-b;
    printf("%d",result);
    break;
case '*':
    result=a*b;
    printf("%d",result);
    break;
case '/':
    result=a/b;
    printf("%d",result);
    break;
default:
    printf("invalid input");
    break;
}
    return 0;
}