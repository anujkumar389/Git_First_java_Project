#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    int s=n-1;
    char alpha='a';
    char alpha2='A';
    for(int i=1;i<=n;i++){
        int count=i-1;
        if(i!=1&&i!=n){
            for(int k=1;k<=s;k++){
                printf(" ");
            }
        }
        for(int j=1;j<=i;j++){
            if(i==1){
                for(int l=1;l<=n;l++){
                    printf("%c",alpha++);
                    alpha2++;
                }
            }else if(i==n){
                printf("%c",alpha2++);
            }else{
                printf("%d",count++);
            }
        }
         printf("\n");
            s--;
    }
    return 0;
}