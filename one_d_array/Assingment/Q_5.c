// Write a program to create an Array and take input from user and print
// the average of the elements.
// INPUT- [6,7,3,9,10]
// OUTPUT – average of the elements = 7
#include<stdio.h>
int main(){
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum/size);
    return 0;
}