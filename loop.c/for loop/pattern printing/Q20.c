#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    int a=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        if(i==n){
            for(int i=n-1;i>0;i--){
                for(int j=1;j<=i;j++){
                    printf("*");
                }
                printf("\n");
            }
        }
    }
    return 0;
}