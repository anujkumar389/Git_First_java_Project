#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    int count=n;
    char b='A'+n-1;
    char a='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j||count==j){
                if(i==j){
                    printf("%c",a++);
                }else{
                    printf("%c",b--);
                }
            }else{
                printf(" ");
            }
            if(count==i==j){
                b--;
            }
        }
        printf("\n");
        count--;
    }
    
    return 0;
}