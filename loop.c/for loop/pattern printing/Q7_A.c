#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    int a=n-1;
    int b=1;
    for(int i=1;i<=n;i++,a--){
        for(int space=1;space<=a;space++){
            printf(" ");
        }
        for(int j=1;j<=b;j++){
            if(j==1||j==b){
                printf("*");
            }else if(i==n/2+1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
        b=b+2;
    }
}