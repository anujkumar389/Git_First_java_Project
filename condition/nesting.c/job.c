#include<stdio.h>
int main(){
int age;
printf("Enter your age..=");
scanf("%d",&age);
if (age>=18 && age<50)
{
    printf("you are elegible for job");
}else{
    if (age<18)
    {
        printf("you are minor");
    }else{
        if(age>50){
            printf("you are too old for job");
        }
    }
    
}
return 0;
}