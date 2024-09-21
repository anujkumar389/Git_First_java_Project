#include<stdio.h>
int main(){
    int a;
    printf("enter NO :");
    scanf("%d",&a);
    int b=1;
    float c=0;
    while(b<=a){
        c=c+b;
        b++;
    }
    c=c/a;
    printf("%.2f",c);
    return 0;
}