#include<stdio.h>
int main(){
    float a;
    float b;
    float c;
     printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    if (a+b+c==180 && !(a+b+c>180))
    {
        printf("yes..%.2f,%.2fand%.2f can from triangle",a,b,c);
    }else{
        printf("triangle can't formed");
    }
    return 0;
    
}