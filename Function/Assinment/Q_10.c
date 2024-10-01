#include<stdio.h>
void table(int t);
int input(){
    int a;
    printf("Enter your no ;");
    scanf("%d",&a);
    table(a);
    return 0;
}
void table(int t){
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",i,t,i*t);
    }
}
int main(){
    input();
    return 0;
}