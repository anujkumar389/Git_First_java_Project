#include<stdio.h>
int main(){
    int n;
    printf("Enter num :");
    scanf("%d",&n);
    int last_digit=n%10;
    int first_digit=0;
    for(;n>0;n/=10){
        first_digit=n%10;
    }
    printf("First digit : %d And Last digit :%d",first_digit,last_digit);
    return 0;
}