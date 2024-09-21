#include<stdio.h>
int main(){
    int n;
    printf("enter no :");
    scanf("%d",&n);
    int space=n-1;
    for(int i=1;i<=n;i++,space--){
        for(int k=1;k<=space;k++){
            printf("  ");
        }
        for(int j=1;j<=i*2-1;j++){
            if(j==1||j==i*2-1){
            printf("%d ",j);
            }else{
                printf("  ");
            }
        }
        printf("\n");
        if(i==n){
            int s=1;
            for(int i2=n-1;i2>0;i2--,s++){
                for(int k=1;k<=s;k++){
                    printf("  ");
                }
                for(int j=1;j<=i2*2-1;j++){
                    if(j==1||j==i2*2-1){
                    printf("%d ",j);
                    }else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}