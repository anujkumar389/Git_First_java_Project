#include<stdio.h>
int main(){
    int num;
    printf("Enter your num :");
    scanf("%d",&num);
    
    while(num>0){
        int i=num;
        printf("%d",i);
        num=num/10;
        printf("\n");
    }
    return 0;
}