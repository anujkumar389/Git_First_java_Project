#include<stdio.h>
int main(){
    int n;
    printf("Enter no :");
    scanf("%d",&n);
    char alpha='A';
    for(int i=1;i<=n;i++){
        int j_alpha='A';
        for(int j=1;i==1&&j<=n;j++){
            printf("%c ",j_alpha++);
        }
        
        printf("\n");
        if(i<n){
            printf("%c",++alpha);
        }

    }
    return 0;
}