#include<stdio.h>
int main(){
    int r,c;
    printf("enter 1st row :\n");
    scanf("%d",&r);
    printf("Enter 1st colume :\n");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Array 1st metrix :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    int r2,c2;
    printf("Enter row2 :");
    scanf("%d",&r2);
    printf("Enter colume :");
    scanf("%d",&c2);
    printf("Enter element :\n");

     
    int arr2[r2][c2];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("2nd array metrix :\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr2[i][j]);
        }
        printf("\n");
    }
    int r3=r;
    int c3=c;
    int arr3[r3][c3];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr3[i][j]=arr[i][j]+arr2[i][j];
            printf("%d",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}