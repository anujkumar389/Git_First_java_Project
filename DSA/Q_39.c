// Write a program to rearrange an array in maximum minimum form?
// input : { 1, 2, 3, 4, 5, 6, 7 }
// Output : { 7, 1, 6, 2, 5, 3, 4 }
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :\n");
    
    scanf("%d",&size);
    int arr[size];
    
    printf("Enter element :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        
    }
    
    for(int i=0;i<size;i=i+2){
       
        for(int j=i;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[j]<arr[k]){
                    int temp=arr[j];
                    arr[j]=arr[k];
                    arr[k]=temp;
                }
            }
        }
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[j]>arr[k]){
                    int temp=arr[j];
                    arr[j]=arr[k];
                    arr[k]=temp;
                }
            }
        }
    }
    printf("updated array\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

return 0;
}