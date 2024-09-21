#include<stdio.h>
int main(){
    int no;
    printf("enter your no :");
    scanf("%d",&no);
    int a=0;
    int b=1;
    int sum=a+b;
    while(sum<no){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d,",sum);
    }
    return 0;
}