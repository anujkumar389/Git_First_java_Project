#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int k=i-1;k>0;k--){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}