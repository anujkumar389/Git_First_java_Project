#include<stdio.h>
int main(){
    int r;
    printf("Enter Row :");
    scanf("%d",&r);
    int c;
    printf("Enter colum :");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
        //printf("\n");
    }
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

return 0;
}