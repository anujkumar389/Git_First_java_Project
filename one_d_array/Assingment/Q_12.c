// Write a program to create an Array and take input from user and
// print the largest element and smallest element..
// INPUT – [32,89,52,6,10]
// OUTPUT – Largest element = 89 ,Smallest element = 6
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements :");
    int max,min;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(i==0){
            min=arr[i];
            max=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("Largest element = %d , Smallest element = %d",max,min);
    return 0;
}