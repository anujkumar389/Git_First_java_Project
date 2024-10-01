// Write a program to take an array and take a number from user and
// check if the given number is present in the array or not.
// INPUT-[8,9,5,4,0] number=6
// OUTPUT- the given number is not present in the array.
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
    int num,check=1;
    printf("Enter number :\n");
    scanf("%d",&num);
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            printf("The given number is present in the array \n");
            check=0;
            break;
        }
    }
    if(check==1){
        printf("The given number is not present in the array \n");
    }
return 0;
}