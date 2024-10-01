// WAP to find 2nd maximum element in array?
// input - [3,5,1,9]
// output- max=5

#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    int max;
    int min;
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
    int max2;
    int min2;
    for(int i=0;i<size;i++){
        if(arr[i]<max){
            for(int j=0;j<size;j++){
                if(arr[i]<arr[j]&&arr[j]<max){
                    max2=arr[j];
                }
            }
        }
        if(arr[i]>min){
            for(int j=0;j<size;j++){
                if(arr[i]>arr[j]&&arr[j]>min){
                    min2=arr[j];
                }
            }
        }
    }
    printf("2nd max %d ,2nd min %d",max2,min2);
    return 0;
}