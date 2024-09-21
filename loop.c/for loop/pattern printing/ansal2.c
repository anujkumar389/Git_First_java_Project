#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    int s=n-1;
    char alpha='A';
    int a=1;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=s;k++){
            printf(" ");
        }
        for(int j=1;j<=a;j++){
            if(i==n&&(j==1||j==a)){
                printf("%d",count++);
            }
           else if(i==n/2&&(j==1||j==a)){
                printf("%d",count++);
            }
            else if(j==1||j==a){
                
                printf("%c",alpha);
            }else{
                printf(" ");
            }
        }
        a=a+2;
        if(i!=n/2){
        alpha++;
        }
        s--;
        printf("\n");
    }
}