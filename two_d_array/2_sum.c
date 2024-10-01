//sum of element of two different array 
#include<stdio.h>
int main(){
    int c,r;
    printf("Enter colume :");
    scanf("%d",&c);
    printf("Enter colume :");
    scanf("%d",&r);
    int arr1[c][r];
    int arr2[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Element of arr2 :");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
         scanf("%d",&arr2[i][j]);
        }
     }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}