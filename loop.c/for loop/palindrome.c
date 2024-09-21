#include<stdio.h>
int main(){
    int num1;
    printf("Enter your no1 :");
    scanf("%d",&num1);
    int num2;
    printf("Enter your no2 :");
    scanf("%d",&num2);

    for(;num1<=num2;num1++){
        int qocent=num1;
        int remender=1;
        int reverse=0;
        for(;qocent>0;qocent=qocent/10){
            remender=qocent%10;
            reverse=reverse*10+remender;
            if(reverse==num1){
                printf("%d,",reverse);
            }
        }

    }
    return 0;
}