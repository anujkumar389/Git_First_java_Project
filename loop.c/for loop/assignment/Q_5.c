#include<stdio.h>
int main(){
    int a;
    printf("Enter your 1st no :");
    scanf("%d",&a);
    int b;
    printf("Enter your 2nd no :");
    scanf("%d",&b);
    for(;a<=b;a++){
        int check=1;
        for(int i=2;i<a;i++){
            if(a%i==0){
                check=0;
                break;
            }
        }
        if(check==1&&a!=1){
            printf("%d is prime no \n",a);
        }
    }
    return 0;

}