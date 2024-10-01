// Write a program to find the maximum product subarray in an array
// Input: { 6, -3, -10, 0, 2 }
// Output: The maximum product subarray is { 6, -3, -10 }
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int product=arr[0];
    int x;
    int y;
    for(int i=0;i<size;i++){
        int temp=1;
        for(int j=i;j<size;j++){
            temp*=arr[j];
            if(temp>product){
                product=temp;
                x=i;
                y=j;
            }
        }
    }
    printf("The maximum product subarray is :\n");
    for(int i=x;i<=y;i++){
        printf("%d,",arr[i]);
    }
    return 0;  
}