#include<stdio.h>
int count(int n){
    int count=0;
    for(;n>0;n/=10){
        count++;
    }
    return count;
}
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    printf("%d",count(n));
    return 0;
}