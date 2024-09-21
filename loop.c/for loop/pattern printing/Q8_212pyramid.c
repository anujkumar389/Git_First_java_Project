#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    int space=n-1;
    int count=1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int k=1;k<=i*2-1;k++){
            if(k>=i){
                // if(k==i){
                // count=1;
                // }
                printf("%d",count++);
            }else if(k<=i){
                printf("%d",count--);
            }
        }
        printf("\n");
        space--;
    }
    return 0;
}