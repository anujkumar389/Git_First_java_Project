#include<stdio.h>
int main(){
    int num;
    printf("Enter your no :");
    scanf("%d",&num);
    for(int i=num;i>0;i--){
        
        for(int j=1;j<=num;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
