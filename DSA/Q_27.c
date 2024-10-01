// 27.Write a program to cyclically rotate an array by one?
// Input : { 1, 2, 3, 4, 5 }
// Output : { 5, 1, 2, 3, 4 }

#include<stdio.h>
int main(){
    int size;
    printf("Enter size :\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter element :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int temp=arr[size-1];
    for(int i=size-1;i>=0;i--){
        if(i==0){
            arr[i]=temp;
            break;
        }
        arr[i]=arr[i-1];
    }
    printf("Updated array :\n");
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}