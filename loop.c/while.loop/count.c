#include<stdio.h>
int main(){
    int num1;
    printf("Enter your num1 :");
    scanf("%d",&num1);
    int num2;
    printf("Enter your num2 :");
    scanf("%d",&num2);
    int count=-1;
    while(num1<num2){
        num1++;
        count++;
    }
    printf("%d",count);

}