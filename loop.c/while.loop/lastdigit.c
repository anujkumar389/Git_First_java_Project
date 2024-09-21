#include<stdio.h>
int main(){
    int num;
    printf("Enter your no :");
    scanf("%d",&num);
    int qocent=num; 
    int remender=0;
    while(qocent>=1){
        remender=qocent%10;
        qocent=qocent/10;
    }
    int last=num%10;
    printf("first digit is %d\n",remender);
    printf("last digit is %d\n",last);
    return 0;
}