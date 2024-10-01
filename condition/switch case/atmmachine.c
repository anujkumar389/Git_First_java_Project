#include<stdio.h>
int main(){
    int a;
    printf("ATM MACHINE\n");
    printf("Option 1..Deposite\n");
    printf("Option 2..Withdraw\n");
    printf("Option 3..Balance enquiry\n");
    printf("Option 4..Change password\n");
    scanf ("%d",&a);
    switch (a)
    {
    case 1:
        printf("Deposite");
        break;
    case 2:
        printf("withdraw");
        break;
    case 3:
        printf("balance enquiry");
        break;
    case 4:
        printf("change password");
        break;
    default:
        printf("invalid input");
        break;
    }
    return 0;
}