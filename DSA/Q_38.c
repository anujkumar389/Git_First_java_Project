// Write a program to count pairs in an array whose sum is divisible by "k"?
// Input : { 2, 2, 1, 7, 5, 3 }, k = 4
// Output : The count of pairs is 5
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :\n");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter Kth no :");
    scanf("%d",&k);
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i]+arr[j])%k==0){
                count++;
            }
        }
    }
    printf("The count of pairs is %d",count);
    return 0;
}