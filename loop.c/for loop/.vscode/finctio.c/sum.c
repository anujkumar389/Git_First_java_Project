#include<stdio.h>
void sum();
int main(){
    printf("Welcome buddy \n");
    sum();
}
void sum(){
    int a;
    printf("Enter your no :");
    scanf("%d",&a);
    int b=0;
    int c=1;
    while(c<=a){
        b=b+c;
        c++;
    }
    printf("%d",b);
}