#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    int space=0;
    for(int i=n;i>0;i--,space++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            if((j==1||j==i*2-1)||i==n){
            printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
        if(i==1){
            int s=n-2;
            for(int i=2;i<=n;i++,s--){
                for(int k=1;k<=s;k++){
                printf(" ");
                }
                for(int j=1;j<=i*2-1;j++){
                    if((j==1||j==i*2-1)||i==n){
                    printf("*");
                    }else{
                        printf(" ");
                    }

                }
                printf("\n");
            }
        }
            
    }
    return 0;
}
   