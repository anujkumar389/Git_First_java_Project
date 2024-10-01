#include<stdio.h>
int a;
int input(){
    printf("Enter no :");
    scanf("%d",&a);
    return 0;
}
int even_odd(){
    input();
    if(a%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}
int main(){
    even_odd();
    return 0;
}