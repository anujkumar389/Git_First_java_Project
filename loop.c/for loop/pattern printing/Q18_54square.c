#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    int a=n;
    int b=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1||j==n||i==1||i==n){
                printf("%d",a);
            }else{
                printf("%d",b);
            }
        }
        printf("\n");
    }
    return 0;
}