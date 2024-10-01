#include<stdio.h>
int power(int base,int power){
    int result=1;
    for(int i=1;i<=power;i++){
        result=result*base;
    }
    return result;
}

int main(){
    int a;
    printf("Enter your base :");
    scanf("%d",&a);
    int b;
    printf("Enter your power :");
    scanf("%d",&b);
    printf("%d",power(a,b));
    return 0;
}