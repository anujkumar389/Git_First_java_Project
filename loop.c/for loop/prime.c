#include<stdio.h>
int main(){
    int no;
    printf("enter your no :");
    scanf("%d",&no);
    int check=1;
    for (int count=2;count<no;count++)
    {
        if(no%count==0){
            check=0;
            break;
        }
    }
    if(check==1){
        printf("%d is prime no",no);
    }else{
        printf("%d is not prime",no);
    }
}