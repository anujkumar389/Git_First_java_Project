#include<stdio.h>
int main(){
    int a;
    printf("enter your ascii value :");
    scanf("%d",&a);
    ((a>=65 && a<=90)||(a>=97 && a<=122))?printf("%c is an alphabet",a):printf("%c is not alphabet",a);
    return 0;
}