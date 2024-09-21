
#include<stdio.h>
int main(){
    int num;
    printf("Enter your num :");
    scanf("%d",&num);
    int count=1;
    int j=97;
    while(num>0){
        int space=num-1;
        while(space>0){
            printf(" ");
            space--;
        }
        int stop=1;
        
        while(count>0){
            printf("%c",j);
            j++;count--;stop++;
            
            
        }
        printf("\n");
        count=stop;
        num--;
    }
    return 0;
}