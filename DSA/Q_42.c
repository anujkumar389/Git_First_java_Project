// .Write a program to sort an array of 0s, 1s and 2s?
// Input : { 0, 1, 2, 0, 1, 2 }
// Output : { 0, 0, 1, 1, 2, 2 }
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            for(int j=i+1;j<size;j++){
                if(arr[j]==0){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
            }
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]!=1&&arr[i]!=0){
            for(int j=i+1;j<size;j++){
                if(arr[j]==1){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
            }
        }
    }
   printf("Updated array :\n");
   for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
   }
    return 0;
}