#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    for(int i=1;i<=n*2-1;i++){
        for(int j=1;j<=n*2-1;j++){
            if(i==n){
                printf("*");
            }else if(j==n){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}