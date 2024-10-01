#include<stdio.h>
int main(){
    int a;
    printf("enter your birth year..:");
    scanf("%d",&a);
    int age=2023-a;
    if (age>=18)
    {
        printf("you are eligible to vote");
    }else{
        if (age<18)
        {
            printf("your are not eligible to vote");
        }else{
            printf("invalid input");
        }
        
    }
    
}