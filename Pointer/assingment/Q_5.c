// 5.Write a program to take input elements in an array and print array
// using pointers.
// Input : arr size = 5
// Elements : 1 2 3 4 5
// Output : Array elements: 1, 2, 3, 4, 5.
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    for(int *p=arr;p<(arr+size);p++){
        scanf("%d",p);
    }
    for(int *p=arr;p<(arr+size);p++){
        printf("%d ",*p);
    }
return 0;
}