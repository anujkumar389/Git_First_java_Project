// Write a program to find the maximum and minimum element 
// present in the matrix.
// INPUT – 4 5 9
//  3 15 6
//  2 1 10
// OUTPUT – maximum =15 minimum = 1
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row & colume ");scanf("%d%d",&r,&c);
    printf("Enter element :");
    int arr[r][c];
    int max,min;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
            if(i==0&&j==0){
                max=arr[i][j];
                min=arr[i][j];
            }else{
                if(max<arr[i][j]){
                    max=arr[i][j];
                }
                if(min>arr[i][j]){
                    min=arr[i][j];
                }
            }

        }
    }
    printf("max : %d\n",max);
    printf("min : %d\n",min);
    return 0;
}