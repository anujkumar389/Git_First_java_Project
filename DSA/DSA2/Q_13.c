// Write a program to find the triplet with given sum in an unsorted array
// Input: { 12, 3, 4, 1, 6, 9 }, sum = 24
// Output: Triplet is { 12, 3, 9 }
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter sum element :\n");
    int sum;
    scanf("%d",&sum);
    for(int i=0;i<size-2;i++){
        for(int j=i+1;j<size-1;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    printf("Triplet is %d,%d,%d\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }

    
 return 0;

}