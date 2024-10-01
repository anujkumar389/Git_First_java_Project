// Write a program to take input in 2d array and arrange the 
// elements in descending order.
//  INPUT – 12 3 1 OUTPUT - 84 20 12
//          0 20 5           9 5 3
//          2 9 84           2 1 0
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
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        for(int k=i;k<r;k++){
            for(int l=k>i?0:j+1;l<c;l++){
                if(arr[i][j]<arr[k][l]){
                    int temp=arr[i][j];
                    arr[i][j]=arr[k][l];
                    arr[k][l]=temp;
                }
            }
        }
    }
}
printf("descending array :\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
return 0;
}
