// Write a program to print the transpose of a matrix.
//  INPUT – 1 2 OUTPUT – 1 3 5
//  3 4 2 4 6
//  5 6 
#include<stdio.h>
int main(){
    int r,c;
printf("Enter row & colume :\n");
scanf("%d%d",&r,&c);
int arr[r][c];
printf("Enter element :\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("Matrix :\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("Transpose matrix :\n");
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");
}
return 0;
}
