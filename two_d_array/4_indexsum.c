#include<stdio.h>
int main(){
    int r;
    printf("Enter your row :");
    scanf("%d",&r);
    int c;
    printf("Enter your colume :");
    scanf("%d",&c);
    int arr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
   
    int col;
    printf("Enter your colume index :");
    scanf("%d",&col);
    int row;
    printf("Enter your row index :");
    scanf("%d",&row);
    printf("%d",arr[col][row]);
    


}