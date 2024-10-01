//  Write a program to take an array from user and arrange the elements
// in ascending order.
// INPUT- arr=[2,9,5,0,3] OUTPUT- arr=[0,2,3,5,9]
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            int temp;
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Ascending Array :\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}