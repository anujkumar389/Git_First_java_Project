#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    int check=1;
    int count=1;
    char alpha='A';

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i%2==1&&j%2==1)||(i%2==0&&j%2==0)){
                // if(check==1){
                //     printf("%d",count);
                //     count++;
                // }else if (check==0)
                // {
                //     printf("%c",alpha);
                //     alpha++;
                // }
                printf("*");

            }else{
                printf(" ");
                // if(i%2==1){
                // count++;
                
                // }else{
                // alpha++;
                // }
            }
            
        }
        printf("\n");
        if(check==1){
            check=0;
        }else if(check==0){
            check=1;
        }
    }
    return 0;
}