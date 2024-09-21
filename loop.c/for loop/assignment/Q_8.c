#include<stdio.h>
int main(){
    int num1;
    printf("Enter your 1st no :");
    scanf("%d",&num1);
    int num2;
    printf("Enter your 2nd no :");
    scanf("%d",&num2);
    for(;num1<=num2;num1++){
        int count=0;
        for(int j=num1;j>0;j/=10){
            count++;
        }
        int arm=0;
        for(int i=num1;i>0;i/=10){
           int r=i%10;
           int power=1;
            for(int j=1;j<=count;j++){
                power=power*r;
            }
            arm=arm+power;
        }
        if(arm==num1){
            printf("%d,",num1);
        }
    }
    return 0;
}