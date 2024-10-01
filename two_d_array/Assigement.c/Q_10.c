// Write a program to find the sum of each row and each 
// column of a matrix.
// INPUT – 12 5
//  9 7
// OUTPUT –
// sum of row 1 = 18
// sum of row 2 = 16
// sum of column 1 = 21
// sum of column 2 = 12
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

int count =1;
for(int i=0;i<r;i++){
    int rowSum=0;
    for(int j=0;j<c;j++){
        rowSum+=arr[i][j];
    }
    printf("Sum of row %dst : %d\n",count++ ,rowSum);
}
int count2 =1;
for(int i=0;i<c;i++){
    int columeSum=0;
    for(int j=0;j<r;j++){
        columeSum+=arr[j][i];
    }
    printf("Sum of colume %dst : %d\n",count2++,columeSum);
}
return 0;
}