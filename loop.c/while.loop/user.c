#include<stdio.h>
int main(){
    int a;
    printf("Enter your no:");
    scanf("%d",&a);

    int b=1;

    while(b<=a){
        printf("%d",b);
        b++;
    }

    return 0;
    
}