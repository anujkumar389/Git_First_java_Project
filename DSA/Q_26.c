// 26. WAP in c to find a pair with given sum in the array?
// input
// [6,8,4,-5,7,9],k=15
// output
// Value of 0 or 5 index sum is equals to 15.
// input
// [2,8,4,-5,3,1],k=13
// output
// Value of 0 or 4 index sum is equals to 13.
// Value of 2 or 5 index sum is equal to 13.

#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements :");
    for(int i=0;i<size;i++){
       scanf("%d",&arr[i]);
    }
    int k;
    printf("enter kth no :\n");
    scanf("%d",&k);
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==k){
                printf("value of %d or %d index sum is equals to %d\n",i,j,k);
            }
        }
    }
    return 0;
}