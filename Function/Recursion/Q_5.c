#include<stdio.h>
int power(int b,int p){
    if(p==0){
        return 1;
    }
    return b*power(b,p-1);
}
int main(){
    int base;
    printf("Enter Your Base :");
    scanf("%d",&base);
    int power2;
    printf("Enter your Power :");
    scanf("%d",&power2);
    printf("%d",power(base,power2));

    return 0;
}