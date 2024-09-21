#include<stdio.h>
int main(){
    int num;
    printf("Enter your num :");
    scanf("%d",&num);
    int a=num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=a-1;j++){
            printf(" ");
        }
        for(int k=1;k<=i*2-1;k++){
            printf("*");
        }
        printf("\n");
        a--;
       
    }
}