#include<stdio.h>
int main(){
    int num1;
    printf("enter your num1 :");
    scanf("%d",&num1);
    int num2;
    printf("enter your num2 :");
    scanf("%d",&num2);
    int sumEven=0;
    int sumOdd=0;
    while(num1<=num2){
        //sumEven=sumEven+num1;
        if(num1%2==0){
            sumEven=sumEven+num1;

        }
        else if(num1%2==1)
        {
            sumOdd=sumOdd+num1; 
        }
        num1++;
        
    }
    printf("sum of even no:%d\n",sumEven);
    printf("sum of odd no : %d\n",sumOdd);
}