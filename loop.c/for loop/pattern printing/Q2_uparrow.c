#include<stdio.h>
int main(){
    int num;
    printf("Enter your no :");
    scanf("%d",&num);
    int count_positive=num;
    int count_nigative=num;
    //char alpha='A';
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num*2-1;j++){
            if(j==count_positive||j==count_nigative){
                // if(alpha=='z'){
                //     alpha='A';
                // }
           // printf("%c",alpha);
           printf("*");
               
            }else{
                printf(" ");
            }
        }
        printf("\n");
        count_positive++;
        count_nigative--;
        //alpha++;
    }
    return 0;
}