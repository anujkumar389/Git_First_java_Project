#include<stdio.h>
int main(){
    int a;
    printf("Enter your 1st num :");
    scanf("%d",&a);
    int b;
    printf("Enter your 2nd num :");
    scanf("%d",&b);
    for(;a<=b;a++){
        if(a%2==0){
            printf("%dCoding\n",a);
        }else{
            printf("%dAge\n",a);
        }

    }
    return 0;
}