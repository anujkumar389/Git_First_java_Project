//  Write a program to takes input from the user for an array, but only
// allows elements that are 0 or 1. Any other number entered by the user
// will not be stored in the array
// INPUT- Size=4
// 1
// 0
// 3 invalid
// 1
// 6 invalid
// 1
// OUTPUT : arr - [1,0,1,1];
#include<stdio.h>
int main(){
    int size;
    printf("Enter size :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter element :\n");
    printf("******your element should be 1 or 0 *******\n");
    for(int i=0;i<size;){
        int temp;
        scanf("%d",&temp);
        if(temp==1||temp==0){
            arr[i]=temp;
            i++;
        }else{
            printf("%d Invalid \n",temp);
        }
    }
    printf("Your Element is :\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}