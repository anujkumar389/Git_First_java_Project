#include<stdio.h>
int main(){
    int num1;
    printf("Enter your 1st no :");
    scanf("%d",&num1);
    int num2;
    printf("Enter your 2nd no :");
    scanf("%d",&num2);
    
    for(;num1<=num2;num1++)
    {
        int check=1;
        for(int divider=2;divider<num1;divider++){
            if(num1%divider==0){
                check=0;
                break;
            }

        }
        if(check==1){
            printf("%d,",num1);
        }
    }
    return 0;
}