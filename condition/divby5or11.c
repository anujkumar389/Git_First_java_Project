#include<stdio.h>
int main(){
    int a;
    printf("enter your number:");
    scanf("%d",&a);
    
    if (a%5==0 && a%11==0)
    {
        printf("yes..%d is divsible by 5 and 11",a);
    }else
    {printf("it is not divsible");}
    return 0;
}