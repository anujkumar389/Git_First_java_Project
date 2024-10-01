#include<stdio.h>
int digt_count(int n,int a){
    if(n==0){
        return a;
    }
    n=n/10;
    return digt_count(n,a+1);
}
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    printf("%d",digt_count(n,0));
    return 0;
}