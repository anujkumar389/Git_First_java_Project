// Write a program to print element of array in reverse.
// INPUT-arr =[1,7,9,4,8] OUTPUT-[8,4,9,7,1]
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Element ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        
    }
    for(int i=0,reverse=size-1;i<size/2;i++,reverse--){
        int temp=arr[i];
        arr[i]=arr[reverse];
        arr[reverse]=temp;
        
    }
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
}