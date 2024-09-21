#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    int max=n%10;
    int min=n%10;
    for(;n>0;n/=10){
        if(n%10>max){
            max=n%10;
        }
        if(n%10<min){
            min=n%10;
        }
    }
    printf("max digit is :%d And min digit is %d",max,min);
    return 0;
}