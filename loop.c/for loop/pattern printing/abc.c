#include<stdio.h>
int main(){
    char x='a';
    char y='A';
    for(int i=1;i<=6;i++){
        if(i==1){
            for(int j=1;j<=6;j++){
                printf(" %d",j);
            }
        }
        if(i==6){
            for(int j =6+1;j<=6*2;j++){
                printf(" %d",j);
            }
        }
        if(i>1&&i<6){
            if(i%2==0){
                for(int k = 1 ; k <= 6;k++){
                      printf(" %c",x);
                      x++;
                }
            }
            else{
                for(int k = 1 ; k <= 6;k++){
                      printf(" %c",y);
                      y++;
                }
            }
        }
        printf("\n");
    }
}