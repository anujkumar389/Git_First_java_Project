// Write a program to find the maximum difference between two elements in
// an array
// Input : { 2, 3, 10, 6, 4, 8, 1 }
// Output : The maximum difference is 9
#include<stdio.h>
int main(){
    int size;
    printf("enter size :\n");
    scanf("%d",&size);
    int arr[size];
    int max;
    int min;
    printf("Enter elements :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(i==0){
            max=arr[i];
            min=arr[i];
        }else{
            if(max<arr[i]){
                max=arr[i];
            }
            if(min>arr[i]){
                min=arr[i];
            }
        }
    }
    printf("Max : %d,min :%d and maximum difference is %d",max,min,max-min);
    return 0;

}