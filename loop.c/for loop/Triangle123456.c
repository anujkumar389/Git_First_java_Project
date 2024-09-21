#include<stdio.h>
int main(){
    int num;
    printf("Enter your no :");
    scanf("%d",&num);
    int count=1;
    int count2=1;
    for(;num>0;num--){
        int stop=1;
        
        for(;count>0;count--){
            printf("%d",count2);
            count2++;
            stop++;
        }
        count=stop;
        printf("\n");
    }
    return 0;
}