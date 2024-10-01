// Write a program to rearrange positive and negative numbers in an array
// Input : { -1, 2, -3, 4, 5, 6, -7, 8, 9 } 
// Output : { 2, 4, 5, 6, 8, 9, -1, -3, -7 }
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    int positiveCount=0;
    int negativeCount=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=0){
            positiveCount++;
        }else{
            negativeCount++;
        }

    }
    
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            for(int j=i+1;j<size;j++){
                if(arr[j]>=0){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
            }
        }
    }
    // printf("Updated array :\n");
    // for(int i=0;i<size;i++){
    //     printf("%d ",arr[i]);
    // }
    
    for(int i=0;i<positiveCount;i++){
        for(int j=i+1;j<positiveCount;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     for(int i=positiveCount;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array :\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}