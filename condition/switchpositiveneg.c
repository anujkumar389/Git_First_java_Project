#include<stdio.h>
int main(){
    int number;
    printf("enter your your integer");
    scanf("%d",&number);
    switch (number>0?2:(number<0?-1:1))
    {
    case 1:
        printf("%d is nither positive or negetive",number);
        break;
    case 2:
    printf("%d is positive number",number);
    break;
    case -1:
     printf("%d is negetive number",number);
     break;
    default:
    printf("invalid");
        break;
    }
    return 0;
}