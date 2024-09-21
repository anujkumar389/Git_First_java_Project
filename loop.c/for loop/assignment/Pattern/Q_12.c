#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    for(int i=1,c=n;i<=n;i++,c--){
        for(int j=1;j<=n;j++){
            if(i==j||j==c){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}