#include<stdio.h>
int mult(int a,int b){
    return a*b;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",mult(a,b));
return 0;
}