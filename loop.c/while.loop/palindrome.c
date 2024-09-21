#include<stdio.h>
int main(){
    int no;
    printf("Enter your no :");
    scanf("%d",&no);
    int qocent=no;
    int remender=0;
    int reverse=0; 
    while(qocent>=1){
        remender=qocent%10;
        qocent=qocent/10;
        reverse=reverse*10+remender;
    }
    if(reverse==no){
        printf("%d is in palindromic sequence",no);
    }else{
        printf("%d is not palindromic sequence",no);
    }
    return 0;
}