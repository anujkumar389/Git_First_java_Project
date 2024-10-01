#include<stdio.h>
int reverse_count(int a){
    if(a==1){
     printf("%d",a); 
        return 0;
    }
    printf("%d",a);
    reverse_count(a-1);
    return 0;
}
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    reverse_count(n);
    return 0;
}