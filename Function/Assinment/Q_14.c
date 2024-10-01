#include<stdio.h>
void factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    printf("%d",fact);
}
int main(){
    int a;
    printf("Entr no :");
    scanf("%d",&a);
    factorial(a);
    return 0;
}