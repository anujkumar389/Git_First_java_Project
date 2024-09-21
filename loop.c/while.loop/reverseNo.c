#include<stdio.h>
int main(){
    int n;
    printf("enter your no :");
    scanf("%d",&n);
    int quocent=n;
    int remender=1;
    int reverse=0;
    while(quocent>=1){
        remender=quocent%10;
        quocent=quocent/10;
        reverse=reverse*10+remender;
    }
    printf("%d",reverse);
    return 0;

}
