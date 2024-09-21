#include<stdio.h>
int main(){
    int num;
    printf("enter your no :");
    scanf("%d",&num);
    int count=1;
    
    for(;num>0;num--){
        int stop=1;
        for(;count>0;count--){
            printf("*");
            stop++;
        }
        printf("\n");
        count=stop;
    }
    return 0;
}