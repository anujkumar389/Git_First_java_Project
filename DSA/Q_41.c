// Write a program to segregate 0s and 1s in an array?
// Input : { 0, 1, 0, 1, 1, 1 } 001111
// Output : { 0, 0, 1, 1, 1, 1 }
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter only 1 andd 0 in element  :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(arr[i]==1){
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
    printf("updated array :\n");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}