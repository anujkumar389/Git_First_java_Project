#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    int r=1;
    int c=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c=r*r+c;
            printf(" %d",c);
            r++;
        }
        printf("\n");
    }
    return 0;
}