// 26. Write a program to find the maximum sum subarray of a given size "k"
// Input: { 1, 4, 2, 10, 2, 3, 1, 0, 20 }, k = 4
// Output: The maximum sum subarray of size 4 is { 2, 10, 2, 3 }
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n"); 
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter subarray size :\n");
    scanf("%d",&k);
    int sum=0;
    int x=0,y=0;
    for(int i=0;i<size;i++){
        int temp=0;
        int j=i;
        for(;j<=(k-1)+i&&j<size;j++){
            temp+=arr[j];
        }
         if(i==0){
                sum=temp;
                x=i;
                y=j-1;
            }else{
                if(sum<temp){
                    sum=temp;
                    x=i;
                    y=j-1;
                }
            }
    }
    printf("The maximum sum subarray of size %d is :\n",k);
    for(int i=x;i<=y;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}