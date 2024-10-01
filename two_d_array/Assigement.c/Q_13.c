// Write a program to multiply the two matrix together.
// INPUT – Frist matrix = 1 2 second matrix = 5 6 
//                        3 4                 7 8
// OUTPUT – product of matrix = 19 22 **1*5+2*7==19;  **1*6+2*8==22;
//                              43 50 **3*5+4*7==43;  **3*6+4*8==50;
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row and colume :\n");
    scanf("%d%d",&r,&c);
    int arr1[r][c];
    int arr2[r][c];
    int arr3[r][c];
    printf("Enter element for Array 1 :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter element for Array 2 :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        arr3[i][j]=0;
        for(int k=0;k<c;k++){
            arr3[i][j]+=arr1[i][k]*arr2[k][j];
        }
    }
   }
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d",arr3[i][j]);
    }
    printf("\n");
   }
   return 0;
}