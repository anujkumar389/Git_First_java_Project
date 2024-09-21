#include<stdio.h>
int main(){
    int no;
    printf("Enter your no :");
    scanf("%d",&no);
    int count=0;
    float a =no;
    while(a>=1){
        a/=10;
        count++;
    }
    printf("digit : %d",count);
    return 0;
}