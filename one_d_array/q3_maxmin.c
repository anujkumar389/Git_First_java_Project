#include<stdio.h>
int main(){
    int size;
    printf("Enter your array size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter your value for index %d :",i);
        scanf("%d",&arr[i]);
    }
    int max=0;
    int min=arr[0];
    for(int j=0;j<size;j++){
        if(arr[j]>max){
            max=arr[j];
        }else if(arr[j]<min){
            min=arr[j];
        }
    }
    printf("Max :%d",max);
    printf("Min :%d",min);
    return 0;
}