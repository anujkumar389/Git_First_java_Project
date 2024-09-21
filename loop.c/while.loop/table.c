#include<stdio.h>
int main(){
    int a;
    printf("enter your No :");
    scanf("%d",&a);
    int count=1;
    int table;
    while(count<=10){
        table=count*a;
        printf("%d\n",table);
        count++;
    }
    return 0;
}