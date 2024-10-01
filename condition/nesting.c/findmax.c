#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter three number..:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("%dis maximum",num1);
    }else{
        if (num2>num1 && num2>num3)
        {
            printf("%d is maximum",num2);
        }else{
            printf("%d is maxmum",num3);
        }
        
    }
    return 0;
}