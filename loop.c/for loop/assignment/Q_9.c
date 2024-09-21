#include<stdio.h>
int main(){
    int num1;
    printf("Enter your range 1 :");
    scanf("%d",&num1);
    int num2;
    printf("Enter your range 2 :");
    scanf("%d",&num2);
    for(;num1<=num2;num1++){
        int strong=0;
        for(int i=num1;i>0;i/=10){
            int r=i%10;
            int factorial=1;
            for(int j=1;j<=r;j++){
                factorial*=j;
            }
            strong+=factorial;
        }
        if(strong==num1){
            printf("%d,",num1);
        }
    }
    return 0;
}