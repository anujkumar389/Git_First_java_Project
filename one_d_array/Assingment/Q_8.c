// write a program to create 2 arrays and merged into a third array.
// INPUT – arr1=[4,9,7,2,11] , arr2=[6,3,8,5].
// OUTPUT : arr3=[ 4,9,7,2,11,6,3,8,5 ].
#include<stdio.h>
int main(){
    int size;
    printf("Enter your 1st array size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of 1st array :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int size2;
    printf("Enter your 2nd array size :");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter elements of 2nd array \n");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    int size3=size+size2;
    int arr3[size3];
    int temp=0;
    for(int i=0;i<size3;i++){
        
        if(i<size){
            arr3[i]=arr[i];
        }else{
            arr3[i]=arr2[temp];
            temp++;
        }
    }
    printf("Your 3rd array element is :\n");
    for(int i=0;i<size3;i++){
        printf("%d\n",arr3[i]);
    }
return 0;


}