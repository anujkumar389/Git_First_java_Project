#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    int space=n*2-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int l=i;l>0;l--){
            printf("%d",l);
        }
        printf("\n");
        space=space-2;

    }
}