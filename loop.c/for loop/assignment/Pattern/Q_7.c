#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    for(int i=n,s=0;i>0;i--,s++){
        for(int k=1;k<=s;k++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            if(i==n||j==1||j==i*2-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}