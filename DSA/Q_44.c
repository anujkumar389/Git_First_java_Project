// Write a program to find the next greater element for each element in an
// array?
// Input : { 4, 5, 2, 25 }
// Output : Next greater element for each element in the array is { 5, 25, 25, -1 }
#include<stdio.h>
int input(int size,int arr[])
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int main(){
    int size;
    printf("Enter Size :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    input(size,arr);
    for(int i=0;i<size;i++){
        if(i==size-1){
            printf("-1");
        }
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                printf("%d, ",arr[j]);
                break;
            }
        }
    }
return 0;
}