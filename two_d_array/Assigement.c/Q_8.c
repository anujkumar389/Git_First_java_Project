// 8. Write a program to check the given two matrix are equal or 
// not.
//  INPUT – Frist matrix = 3 2 second matrix = 1 2 
//  1 5 3 5
//  OUTPUT – the matrices are not equal
#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter row and colume ");scanf("%d%d",&r1,&c1);
    int arr1[r1][c1];
    printf("Enter element \n");
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    int r2,c2;
    printf("Enter row and colume :");scanf("%d %d",&r2,&c2);
    int arr2[r2][c2];
    printf("Enter element \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(arr1[i][j]!=arr2[i][j]){
                printf("unequal matrix ...! ");
                return 0;
            }
        }
    }
    printf("Equal matrix ...!!!");
    return 0;
}