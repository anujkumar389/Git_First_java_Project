#include<stdio.h>
int main(){
    int num;
    printf("Enter your no :");
    scanf("%d",&num);
    int a=num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int k=a*2-1;k>0;k--){
            printf("*");
        }
        printf("\n");
        a--;
    }
    return 0;
}