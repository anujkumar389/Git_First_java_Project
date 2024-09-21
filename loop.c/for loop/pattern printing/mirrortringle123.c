#include<stdio.h>
int main(){
    int num;
    printf("Enter your num");
    scanf("%d",&num);
    int count=1;
    while(num>0){
        int space=num-1;
        while(space>0){
            printf(" ");
            space--;
        }
        int stop=1;
        while(stop<=count){
            printf("%d",stop);
            stop++;
        }
        count++;
        printf("\n");
        num--;
    }
    return 0;

}