#include<stdio.h>
int main(){
    int num;
    printf("Enter your num :");
    scanf("%d",&num);
    int count=1;
    while(num>0){
        int space=num-1;
        while(space>0){
            printf(" *");
            space--;
        }
        int star=1;
        while(count>0){
            printf("*");
            count--;
            star++;
        }
        count=star;
        printf("\n");
        num--;
    }
    return 0;
}