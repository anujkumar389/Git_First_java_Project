#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    int check=1;
    for(int i=n;i<=n;check==1?i--:i++){
        
        for(int j=1;j<=i;j++){
            printf("*");
        }
        if(i==1){
            check=0;
        }
        printf("\n");
    }
}