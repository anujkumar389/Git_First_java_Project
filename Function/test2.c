#include<stdio.h>
void sumdigit(){
    int no;
    printf("Enter no :");
    scanf("%d",&no);
    for(;no>=10;){
        int sum=0;
        int r;
        int c=no;
        for(;c>0;c=c/10){
            r=c%10;
            sum+=r;

        }
            no=sum;

        if(sum<=9){
            printf("%d",sum);   
        }
    }
}
int main(){
    sumdigit();
}