#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    for(int i=1,s=n-1;i<=n;i++,s--){
        for(int k=1;k<=s;k++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            if(i==n/2+1||j==1||j==i*2-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}