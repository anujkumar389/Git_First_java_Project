#include<stdio.h>
int main(){
    int num;
    printf("enter your no :");
    scanf("%d",&num);
    int quocent=num;
    int remainder=0;
    int factorial_sum=0;
    while(quocent>0){
        remainder=quocent%10;
        int count=1;
        int factorial=1;
        while(count<=remainder){
            factorial=factorial*count;
            count++;
        }
        factorial_sum=factorial_sum+factorial;
        quocent=quocent/10;
    }
    if(factorial_sum==num){
        printf("%d is strong no ",num);
    }else{
        printf("%d is not strong no",num);
    }
    return 0;
}