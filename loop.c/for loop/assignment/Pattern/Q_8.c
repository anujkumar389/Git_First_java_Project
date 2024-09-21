#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    for(int i=n,s=0;i>0;i--,s++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int k=1;k<=s*2-1;k++){
            printf(" ");
        }
        for(int l=1;l<=i;l++){
            if(i==n&&l==1){
                continue;
            }
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}