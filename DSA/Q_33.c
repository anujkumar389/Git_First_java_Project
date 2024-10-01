// Wap to find mountain in array?
// Input : { 16, 17, 11, 3, 5, 2, 8 }
// Output : 17 and 5 is mountain.


#include<stdio.h>
int main(){
    int size;
    printf("enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int num=0;
    for(int i=0;i<size;i++){
        
        if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
            printf("%d is mountain",arr[i]);
        }
        
    }
return 0;
}