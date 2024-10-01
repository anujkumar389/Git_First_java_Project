// 17. Write a program to count pairs in an array whose sum is divisible by "k"
// Input: { 2, 2, 1, 7, 5, 3 }, k = 4
// Output: The count of pairs is 5
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
    printf("Enter no :\n");
    scanf("%d",&k);
    int count=0;
    for(int i=0;i<size-1;i++){ 
        for(int j=i+1;j<size;j++){
            if((arr[i]+arr[j])%k==0){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}