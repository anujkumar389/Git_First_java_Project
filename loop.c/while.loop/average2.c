#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter your num1 :");
    scanf("%d",&num1);
    printf("Enter your num2 : ");
    scanf("%d",&num2);
    float  sum=0;
    int count=0;
    while(num1<=num2){
         sum=sum+num1;
         num1++;
         count++;
    }
    float average=sum/count;
    printf("%.2f",average);
    return 0;
}