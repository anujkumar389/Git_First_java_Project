//  Write a program to count inversions in an array
// Input: { 2, 4, 1, 3, 5 }
// Output: The number of inversions in the array is 3
#include<stdio.h>
int main(){
    int size;
    printf("Enter no :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int inversion=0;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                inversion++;
            }
        }
    }

    printf("Inversion :%d",inversion);
    return 0;
}