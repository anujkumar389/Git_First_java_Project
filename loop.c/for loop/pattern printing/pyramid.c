#include<stdio.h>
int main(){
    int a=3;
    for(int i=1;i<=3;i++){
        for(int j=0;j<i-1;j++){
            printf(" ");
        }
        for(int k=a;k>=1;k--){
            printf("* ");
            
        }
        a--;
        printf("\n");
    }
    
}