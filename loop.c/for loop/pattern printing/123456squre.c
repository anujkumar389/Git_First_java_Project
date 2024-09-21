#include<stdio.h>
int main(){
    int num;
    printf("Enter your number :");
    scanf("%d",&num);
    for(int count=1,i=num;i>0;i--){
        for(int j=num;j>0;j--,count++){
            printf("%d",count);
        }
        printf("\n");
    }
    return 0;
}