// 8.Write a program to access two dimensional array using pointers.
// Input : Input elements in 3x3 matrix:
// 1 2 3
// 4 5 6
// 7 8 9
// Output : 1 2 3
// 4 5 6
// 7 8 9
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row and colume :");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int *p=&arr[0][0];p<=&arr[r-1][c-1];p++){
        scanf("%d",p);
    }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    printf("In 1D formats :\n");
    for(int *p=&arr[0][0];p<=&arr[r-1][c-1];p++){
        printf("%d",*p);
    }
    printf("In 2D formate :\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", *(arr[i] + j));
        }
        printf("\n");
    }

   
    return 0;
}