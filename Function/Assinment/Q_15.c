#include<stdio.h>
int r=0;
int palindrome(int a){
    if(r==a){
        printf("Palindromic : YES\n");
    }else{
        printf("Palindromic : NO\n");
    }
    return 0;
}
int reverse(int n){
    int a=n;
    for(;a>0;a=a/10){
        int rem=a%10;
        r=r*10+rem;
    }
    printf("Reverse : %d\n",r);
    palindrome(n);
    return 0;
}
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    reverse(n);
    return 0;
}