#include<stdio.h>
int reverse(int a){
    int rev=0;
    for(int i=a;i>0;i=i/10){
        int r=i%10;
        rev=rev*10+r;
    }
    return rev;
}
int main(){
    int num;
    printf("Enter your no :");
    scanf("%d",&num);
    printf("%d",reverse(num));
    return 0;
}