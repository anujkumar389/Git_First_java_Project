#include<stdio.h>
int main(){
    int num;
    printf("Enter your no :");
    scanf("%d",&num);
   
    for(;num>0;num--){
         int count=num;
         int count2=1;
        for(;count>0;count--){
            printf("%d",count2);
            count2++;
        }
        printf("\n");
    }
}