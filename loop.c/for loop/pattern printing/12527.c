#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    int count=1;
    int count2=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("  %d",count2);
            count2=count2*count2+count;
            if(j==n){
                count++;
            }
        }
        printf("\n");
    }
}