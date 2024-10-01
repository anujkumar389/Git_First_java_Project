#include<stdio.h>
int r=0;
int reverse(int a){
    if(a==0){
        return 0;
    }
    int rem=a%10;
    r=r*10+rem;
    a=a/10;
    reverse(a);
    return 0; 
}
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    reverse(n);
    printf("%d\n",r);
    return 0;
}