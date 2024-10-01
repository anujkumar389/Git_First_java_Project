//  Write a program to create an Array and take input from user and
// print the average of the sum of odd numbers and average of the sum of
// even numbers.
// INPUT – [4,3,2,5,6]
// OUTPUT – average of odd elements = 4, average of even elements = 4
#include<stdio.h>
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Elements :");
    int evenSum=0,evenCount=0;
    int oddSum=0,oddCount=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            evenSum+=arr[i];
            evenCount++;
        }else{
            oddSum+=arr[i];
            oddCount++;
        }
    }
    printf("average of odd elements = %d , average of even elenents =%d ",oddSum/oddCount,evenSum/evenCount);
    return 0;
}
