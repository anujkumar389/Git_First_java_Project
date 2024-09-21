#include<stdio.h>
int main(){
    int base;
    printf("enter your Base :");
    scanf("%d",&base);
    int power;
    printf("Enter your Power :");
    scanf("%d",&power);
    int result=1;
    while(power>0){
        result *=base;
        power--;
    }
    printf("your result is : %d",result);
    return 0;
}