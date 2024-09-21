#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    char alpha='A';
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            printf("%c",alpha++);
        }
        printf("\n");
        alpha=alpha-2;
    }
}