#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    int count=1;
    char a='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==1){
                if(j%2==1){
                    printf("%d ",count);
                    count=count+2;
                }//else{
                //     //printf(" ");
                //     //count++;
                // }
            }else{
                if(i%2==0){
                    if(j%2==0){
                        printf(" %c",a);
                        a++;
                    }else{
                        //printf(" ");
                        a++;
                    }

                    
                }
            }

        }
        printf("\n");
        // if(i%2==1){
        // count++;
        // }
            
    }
        
     
}
