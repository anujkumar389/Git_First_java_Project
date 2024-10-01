#include<stdio.h>
int rem(int a,int b,int c){
    if(c==1){
    return a/b;
    }else{
        return a%b;
    }
}
int main(){
    int a;
    int b;
    scanf("%d%d",&a,&b);
    printf("Q : %d",rem(a,b,1));
    printf("R : %d",rem(a,b,-2));
    
return 0;
}