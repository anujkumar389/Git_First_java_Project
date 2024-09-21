#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    int count=1;
    char alpha='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1||j==n){
                if(j==1){
                    alpha++;
                }
                printf("%d",count++);
            }else{
                printf("%c",alpha++);
                count++;
            }
        }
        printf("\n");
    }
}