#include<stdio.h>
int main(){
    int num1;
    printf("Enter your 1st  no :");
    scanf("%d",&num1);
    int num2;
    printf("Enter your 2nd no : ");
    scanf("%d",&num2);
    for(;num1<=num2;num1++){
        int reverse=0;
        for(int i=num1;i>0;i=i/10){
            reverse=reverse*10+i%10;
        }
        if(reverse==num1){
            printf("%d,",num1);
        }
    }
    return 0;
}