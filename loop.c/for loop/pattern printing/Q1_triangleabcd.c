#include<stdio.h>
int main(){
    int num;
    printf("Enter your no");
    scanf("%d",&num);
    int count=1;
    int count2=97;
    for(;num>0;num--){
        
        int stop=1;
        for(;count>0;count--){
            printf("%c",count2);
            stop++;
            count2++;
        }
        printf("\n");
        count=stop;

    }
    return 0;
}