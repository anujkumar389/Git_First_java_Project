// 9. Write a program to add two matrix using pointers.
// Input : Input matrix1: Input matrix2:
// 1 2 3  1 2 3
// 4 5 6  4 5 6
// 7 8 9  7 8 9
// Output : Sum of both matrices:
// 2 4 6
// 8 10 12
// 14 16 18
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row and colume :");
    scanf("%d%d",&r,&c);
    int arr1[r][c];
    int arr2[r][c];
    printf("Enter element of 1st Array \n");
    for(int *p=&arr1[0][0];p<=&arr1[r-1][c-1];p++){
        scanf("%d",p);
    }
     printf("Enter element of 2nd Array \n");
    for(int *p=&arr2[0][0];p<=&arr2[r-1][c-1];p++){
        scanf("%d",p);
    }
    printf("Sum of both matrices :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",*(arr1[i]+j)+*(arr2[i]+j));
        }
        printf("\n");
    }
    return 0;
    
}