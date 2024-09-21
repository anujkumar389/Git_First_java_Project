#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    int decrement=n;
    int increment=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n*2-1;j++){
            if(j==decrement||j==increment){
                printf("*");
                
                
            }else{
                printf(" ");
            }
        }
        printf("\n");
        decrement--;
        increment++;
    }
    return 0;
}