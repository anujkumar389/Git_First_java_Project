#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    char alpha2='A';
    char alpha='a';
    int check=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(check==1){
                printf("%c",alpha);
                check=0;
                alpha++;alpha2++;
            }else{
                if(check==0){
                    printf("%c",alpha2);
                    alpha2++;alpha++;check=1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}