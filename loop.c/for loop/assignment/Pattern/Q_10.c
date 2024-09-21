#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    int check=1;
    for(int i=n,s=0;i<=n;){
        if(i==1){
            check=0;
        }
        for(int k=1;k<=s;k++){
            printf(" ");
        }
        for(int j =1;j<=i;j++){
            printf("*");
        }
        if(check==1){
            i--;s++;
        }else{
            i++;s--;
        }
        printf("\n");
    }
    return 0;
}