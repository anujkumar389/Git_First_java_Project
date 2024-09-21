#include<stdio.h>
int main(){
    int num;
    printf("Enter your num :");
    scanf("%d",&num);
    int count=num*(num+1)/2;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("%d",count);
            count--;
        }
        printf("\n");
    }
return 0;
}