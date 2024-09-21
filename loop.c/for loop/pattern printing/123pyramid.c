#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    int s=n-1;
    //int a=1;
    //int check=1;
    for(int i=1;i<=n;i++,s--){
        for(int space=1;space<=s;space++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            //if(check==1){
                printf("* ");
              //  check=0;
            //}else if(check==0){
               // printf(" ");
               // check=1;
            //}
        }
        //check=1;
       
        printf("\n");
        //a=a+2;
        if(i==n){
            for(int w=1,z=n-1;w<=n-1;w++,z--){
                for(int k=1;k<=w;k++){
                    printf(" ");
                }
                for(int j=1;j<=z;j++){
                    printf("* ");
                }
                printf("\n");
            }
            
        }
        
    }
    return 0;
}