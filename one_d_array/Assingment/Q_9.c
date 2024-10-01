// . Write a program to create an Array and take input from user and print
// the sum of even numbers and sum of odd number.
// INPUT-[2,8,10,1,3]
// OUTPUT – sum of even elements = 20 , sum of odd numbers = 4.
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    int evenSum=0;
    int oddSum=0;
    printf("Enter elements :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            evenSum+=arr[i];
        }else{
            oddSum+=arr[i];
        }
    }
    printf("Sum of even elements = %d , sum of odd numbers = %d",evenSum,oddSum);
    return 0;


}
