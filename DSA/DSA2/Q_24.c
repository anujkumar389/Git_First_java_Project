// 24. Write a program to find the smallest positive missing number in an unsorted array
// Input: { 2, 3, 7, 6, 8, -1, -10, 15 }
// Output: The smallest positive missing number is 1
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    int max;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(i==0){
            max=arr[i];
        }else if(max<arr[i]){
            max=arr[i];
        }
    }
    int check=1;
    int c=1;
    for(;c<=max&&check==1;c++){
        for(int i=0;i<size;i++){
            if(arr[i]==c){
                check=1;
                break;
            }else{
                check=0;
            }
        }
    }
    if(check==0){
        printf("The smallest positive missing number is : %d",c-1);
    }
    return 0;
}