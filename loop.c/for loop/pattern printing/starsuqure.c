#include<stdio.h>
int main(){
    int num;
    printf("Enter your no :");
    scanf("%d",&num);
    for(int i=num;i>0;i--){
        
        for(int j=num;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}