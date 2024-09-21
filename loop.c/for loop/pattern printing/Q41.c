#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            if(j==1||j==i||i==n){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}