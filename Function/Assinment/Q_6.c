
#include<stdio.h>
int a;
int b;
int input(){
    printf("Enter no :");
    scanf("%d%d",&a,&b);
    return 0;
}
int add(int a,int b){
    return a+b;
}
int main(){

   input();
   printf("%d",add(a,b));
}