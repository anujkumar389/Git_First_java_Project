// Write a program to create an Array an take input from user and print
// the product of the elements .
// INPUT – [1,2,3,4,5] OUTPUT – product = 120
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    int product=1;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        product*=arr[i];
    }
    printf("PRODUCT :%d",product);
    return 0;
}