#include<stdio.h>
int main(){
    int num;
    printf("Enter your no :");
    scanf("%d",&num);
    int x=printf("%d\n",num);
    int y=x-1;
    printf("%d digits",y);
}