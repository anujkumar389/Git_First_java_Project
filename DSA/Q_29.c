// 29.Write a program to find the missing number in an array of consecutive
// numbers
// Input : { 1, 2, 3, 5, 6, 7, 8 } 
// Output: The missing number is 4.
#include<stdio.h>
int main(){
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int c=1;
    for(int i=0;i<size;i++,c++){
        if(arr[i]!=c){
            printf("%d is missing\n",c);
            c++;
        }
    }
    return 0;
}